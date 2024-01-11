#include "funciones.h"

namespace fs = std::filesystem;
using namespace std;

const unsigned int width = 600;
const unsigned int height = 600;

#define BLOCKS 14
#define N 11

pila<Move> P;
pila<Move> P_;

GLfloat lightVertices[] =
{ //     COORDINATES     //
	-0.1f, -0.1f,  0.1f,
	-0.1f, -0.1f, -0.1f,
	 0.1f, -0.1f, -0.1f,
	 0.1f, -0.1f,  0.1f,
	-0.1f,  0.1f,  0.1f,
	-0.1f,  0.1f, -0.1f,
	 0.1f,  0.1f, -0.1f,
	 0.1f,  0.1f,  0.1f
};

GLuint lightIndices[] =
{
	0, 1, 2,
	0, 2, 3,
	0, 4, 7,
	0, 7, 3,
	3, 7, 6,
	3, 6, 2,
	2, 6, 5,
	2, 5, 1,
	1, 5, 4,
	1, 4, 0,
	4, 5, 6,
	4, 6, 7
};

// Vertices
GLfloat vertices[N * 24 * BLOCKS];
GLfloat aux[N * 24 * BLOCKS] = {0.f};

// Indices
GLuint indices[36 * BLOCKS] = //36*#bloques
{
	0,1,2,
	0,2,3,

	4,5,6,
	4,6,7,

	8,9,10,
	8,10,11,

	12,13,14,
	12,14,15,

	16,17,18,
	16,18,19,

	20,21,22,
	20,22,23,
};

//Nos da la opcion de avanzar en la animacion o retroceder
//ademas de restaurar a su posición original la marioneta
int start(GLFWwindow* window) {
	if (glfwGetKey(window, GLFW_KEY_M) == GLFW_PRESS)
		return 1;
	if (glfwGetKey(window, GLFW_KEY_N) == GLFW_PRESS)
		return 2;
	if (glfwGetKey(window, GLFW_KEY_G) == GLFW_PRESS) {
		for (int i = 0; i < 24 * N * BLOCKS; i++) {
			vertices[i] = aux[i];
		}
		while (!P_.isempty()) {
			P.push({ P_.top().a,P_.top().b, glm::inverse(P_.top().mat) });
			P_.pop();
		}
	}
	return 0;
}

int main()
{
	// Iniciamos GLFW
	glfwInit();

	// Empleamos la Versión 3.3 de OpenGL
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Empleamos la versión moderna de OpenGL
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Creamos la ventana
	GLFWwindow* window = glfwCreateWindow(width, height, "Proyecto", NULL, NULL);
	if (window == NULL){
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	// Frames
	glfwSwapInterval(1);

	// Iniciamos GLAD
	gladLoadGL();
	glViewport(0, 0, width, height);

	// Creamos y Compilamos los Shaders
	Shader shaderProgram("default.vert", "default.frag");


	//---Aqui van las modificaciones iniciales---//
	//Llenamos indices
	for (int j = 2; j <= BLOCKS; j++) { //# bloques
		for (int i = 36 * (j - 1); i < 36 * j; i++) {
			indices[i] = indices[i - 36 * (j - 1)] + 24 * (j - 1);
		}
	}
	ColocarMarioneta(vertices, aux);

	// Generamos el Vertex Array Object y lo unimos
	VAO VAO1;
	VAO1.Bind();

	// Generamos Vertex Buffer Object y lo vinculamos a los vertices
	VBO VBO1(vertices, sizeof(vertices));
	// Generamos Element Buffer Object y lo vinculamos a los indices
	EBO EBO1(indices, sizeof(indices));

	// Vinculamos los atributos de VBO como las coordenadas y el color al VAO
	VAO1.LinkAttrib(VBO1, 0, 3, GL_FLOAT, 11 * sizeof(float), (void*)0);
	VAO1.LinkAttrib(VBO1, 1, 3, GL_FLOAT, 11 * sizeof(float), (void*)(3 * sizeof(float)));
	VAO1.LinkAttrib(VBO1, 2, 2, GL_FLOAT, 11 * sizeof(float), (void*)(6 * sizeof(float)));
	VAO1.LinkAttrib(VBO1, 3, 3, GL_FLOAT, 11 * sizeof(float), (void*)(8 * sizeof(float)));
	// Unbind all to prevent accidentally modifying them
	VAO1.Unbind();
	VBO1.Unbind();
	EBO1.Unbind();

	// Repetimos el proceso anterior para generar la luz
	Shader lightShader("light.vert", "light.frag");
	VAO lightVAO;
	lightVAO.Bind();
	VBO lightVBO(lightVertices, sizeof(lightVertices));
	EBO lightEBO(lightIndices, sizeof(lightIndices));
	lightVAO.LinkAttrib(lightVBO, 0, 3, GL_FLOAT, 3 * sizeof(float), (void*)0);
	lightVAO.Unbind();
	lightVBO.Unbind();
	lightEBO.Unbind();

	// Espesificaciones de la Luz
	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.0f, 1.0f, 1.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	//Usamos nuestros Shaders
	lightShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(lightShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(lightModel));
	glUniform4f(glGetUniformLocation(lightShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	shaderProgram.Activate();
	glm::mat4 Model = glm::mat4(1.0f);
	glUniformMatrix4fv(glGetUniformLocation(shaderProgram.ID, "model"), 1, GL_FALSE, glm::value_ptr(Model));
	glUniform4f(glGetUniformLocation(shaderProgram.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(shaderProgram.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	// Activamos la profundidad
	glEnable(GL_DEPTH_TEST);

	// Iniciamos la camara
	Camera camera(width, height, glm::vec3(0.0f, 0.25f, -2.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(1.0f, 1.0f, 1.0f));
	
	//Creamos nuestra secuencia de matrices para nuestra animacion
	GeneraAnimacion(P);
	
	// Main while loop
	while (!glfwWindowShouldClose(window))
	{
		// Color del Fondo
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Para mover la camara
		camera.Inputs(window);
		camera.updateMatrix();

		// Le pasamos los movimientos de la camara a los shaders
		shaderProgram.Activate();
		glUniform3f(glGetUniformLocation(shaderProgram.ID, "camPos"), camera.Position.x, camera.Position.y, camera.Position.z);
		camera.Matrix(shaderProgram, "camMatrix");

		// Bind the VAO so OpenGL knows to use it
		VAO1.Bind();

		//---Aqui van las modificaciones in game---//
		test(window, vertices);

		// Generamos Vertex Buffer Object y lo vinculamos a los vertices
		VBO1 = VBO(vertices, sizeof(vertices));

		// Vinculamos VBO a VAO
		VAO1.LinkAttrib(VBO1, 0, 3, GL_FLOAT, 11 * sizeof(float), (void*)0);
		VAO1.LinkAttrib(VBO1, 1, 3, GL_FLOAT, 11 * sizeof(float), (void*)(3 * sizeof(float)));
		VAO1.LinkAttrib(VBO1, 2, 2, GL_FLOAT, 11 * sizeof(float), (void*)(6 * sizeof(float)));
		VAO1.LinkAttrib(VBO1, 3, 3, GL_FLOAT, 11 * sizeof(float), (void*)(8 * sizeof(float)));
		// Unbind all to prevent accidentally modifying them
		VAO1.Unbind();
		VBO1.Unbind();
		EBO1.Unbind();

		VAO1.Bind();
		glDrawElements(GL_TRIANGLES, sizeof(indices) / sizeof(int) * BLOCKS, GL_UNSIGNED_INT, 0);

		if (start(window) == 1) {
			if (!P.isempty()) {
				animar(P.top().a, P.top().b, P.top().mat, vertices);
				P_.push({P.top().a,P.top().b,glm::inverse(P.top().mat)});
				P.pop();
				// Generamos Vertex Buffer Object y lo vinculamos a los vertices
				VBO1 = VBO(vertices, sizeof(vertices));

				// Vinculamos VBO a VAO
				VAO1.LinkAttrib(VBO1, 0, 3, GL_FLOAT, 11 * sizeof(float), (void*)0);
				VAO1.LinkAttrib(VBO1, 1, 3, GL_FLOAT, 11 * sizeof(float), (void*)(3 * sizeof(float)));
				VAO1.LinkAttrib(VBO1, 2, 2, GL_FLOAT, 11 * sizeof(float), (void*)(6 * sizeof(float)));
				VAO1.LinkAttrib(VBO1, 3, 3, GL_FLOAT, 11 * sizeof(float), (void*)(8 * sizeof(float)));
				// Unbind all to prevent accidentally modifying them
				VAO1.Unbind();
				VBO1.Unbind();
				EBO1.Unbind();
				
				VAO1.Bind();
				glDrawElements(GL_TRIANGLES, sizeof(indices) / sizeof(int) * BLOCKS, GL_UNSIGNED_INT, 0);
			}
		}
		else if (start(window) == 2) {
			if (!P_.isempty()) {
				animar(P_.top().a, P_.top().b, P_.top().mat, vertices);
				P.push({ P_.top().a,P_.top().b,glm::inverse(P_.top().mat) });
				P_.pop();
				
				//Dibujamos
				VBO1 = VBO(vertices, sizeof(vertices));
				VAO1.LinkAttrib(VBO1, 0, 3, GL_FLOAT, 11 * sizeof(float), (void*)0);
				VAO1.LinkAttrib(VBO1, 1, 3, GL_FLOAT, 11 * sizeof(float), (void*)(3 * sizeof(float)));
				VAO1.LinkAttrib(VBO1, 2, 2, GL_FLOAT, 11 * sizeof(float), (void*)(6 * sizeof(float)));
				VAO1.LinkAttrib(VBO1, 3, 3, GL_FLOAT, 11 * sizeof(float), (void*)(8 * sizeof(float)));
				VAO1.Unbind();
				VBO1.Unbind();
				EBO1.Unbind();
				VAO1.Bind();
				glDrawElements(GL_TRIANGLES, sizeof(indices) / sizeof(int) * BLOCKS, GL_UNSIGNED_INT, 0);
			}
		}

		//Dibujamos
		glDrawElements(GL_TRIANGLES, sizeof(indices) / sizeof(int) * BLOCKS, GL_UNSIGNED_INT, 0);


		// Dibujamos la fuente de luz
		/*lightShader.Activate();
		camera.Matrix(lightShader, "camMatrix");
		lightVAO.Bind();
		glDrawElements(GL_TRIANGLES, sizeof(lightIndices) / sizeof(int), GL_UNSIGNED_INT, 0);*/


		// Swap the back buffer with the front buffer
		glfwSwapBuffers(window);
		// Take care of all GLFW events
		glfwPollEvents();
	}

	// Borramos todos los obejtos creados
	VAO1.Delete();
	VBO1.Delete();
	EBO1.Delete();
	shaderProgram.Delete();
	lightVAO.Delete();
	lightVBO.Delete();
	lightEBO.Delete();
	lightShader.Delete();
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}