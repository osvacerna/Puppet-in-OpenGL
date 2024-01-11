#include "funciones.h"

// Primitivas
GLfloat bloque[] =
{
	//    Position    /      Color        /   Textura   /       Normales
	//Front
	0.0f, 0.0f, 0.0f,   0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.0f, 0.0f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.5f, 0.0f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.0f, 0.5f, 0.0f,   0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	//Back
	0.0f, 0.0f,  -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.0f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.5f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.0f, 0.5f,  -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	//DOWN
	0.0f, 0.0f,  -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, 0.0f,    0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	//UP
	0.0f, 0.5f,  -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	//LEFT
	0.0f, 0.0f, -0.25f,   0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, -0.25f,   0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	//RIGHT
	0.25f, 0.0f, 0.0f,    0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.0f, 0.0f, 0.0f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f
};

// Brazo
GLfloat brazo[] =
{
	//    Position    /      Color        /   Textura   /       Normales
	//Front
	0.0f, 0.0f, 0.0f,   0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.0f, 0.0f,  0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.5f, 0.0f,  0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.0f, 0.5f, 0.0f,   0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	//Back
	0.0f, 0.0f,  -0.25f,  0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.5f, -0.25f,  0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.0f, 0.5f,  -0.25f,  0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	//DOWN
	0.0f, 0.0f,  -0.25f,  0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, 0.0f,    0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, .4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	//UP
	0.0f, 0.5f,  -0.25f,  0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.0f, .67f, .66f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	//LEFT
	0.0f, 0.0f, -0.25f,   0.67f, .66f, .4f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.67f, .66f, .4f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.0f, .67f, .66f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, -0.25f,   0.0f, .67f, .66f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	//RIGHT
	0.25f, 0.0f, 0.0f,    0.67f, .66f, .4f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, .4f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.0f, .67f, .66f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.0f, .67f, .66f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f
};

// Brazo
GLfloat pie[] =
{
	//    Position    /      Color        /   Textura   /       Normales
	//Front
	0.0f, 0.0f, 0.0f,   0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.0f, 0.0f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.5f, 0.0f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.0f, 0.5f, 0.0f,   0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	//Back
	0.0f, 0.0f,  -0.25f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.0f, -0.25f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.5f, -0.25f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.0f, 0.5f,  -0.25f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	//DOWN
	0.0f, 0.0f,  -0.25f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, 0.0f,    0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	//UP
	0.0f, 0.5f,  -0.25f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	//LEFT
	0.0f, 0.0f, -0.25f,   0.39f, 0.39f, .41f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.39f, 0.39f, .41f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, -0.25f,   0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	//RIGHT
	0.25f, 0.0f, 0.0f,    0.39f, 0.39f, .41f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.39f, 0.39f, .41f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.27f, 0.21f, 0.62f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f
};

//Cabeza
GLfloat cabeza[] =
{
	//    Position    /      Color        /   Textura   /       Normales
	//Front
	0.0f, 0.0f, 0.0f,   0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.0f, 0.0f,  0.67f, .66f, 0.4f,   0.0f, 1.0f,   0.0f, 0.0f, 1.0f,
	0.25f, 0.5f, 0.0f,  0.67f, .66f, 0.4f,   1.0f, 1.0f,   0.0f, 0.0f, 1.0f,
	0.0f, 0.5f, 0.0f,   0.67f, .66f, 0.4f,   1.0f, 0.0f,   0.0f, 0.0f, 1.0f,
	//Back
	0.0f, 0.0f,  -0.25f,  0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.25f, 0.5f, -0.25f,  0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	0.0f, 0.5f,  -0.25f,  0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 0.0f, -1.0f,
	//DOWN
	0.0f, 0.0f,  -0.25f,  0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, 0.0f,    0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, 0.4f,   0.0f, 0.0f,   0.0f, -1.0f, 0.0f,
	//UP
	0.0f, 0.5f,  -0.25f,  0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   0.0f, 1.0f, 0.0f,
	//LEFT
	0.0f, 0.0f, -0.25f,   0.67f, .66f, 0.4f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.0f, 0.0f,     0.67f, .66f, 0.4f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, 0.0f,     0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	0.0f, 0.5f, -0.25f,   0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   -1.0f, 0.0f, 0.0f,
	//RIGHT
	0.25f, 0.0f, 0.0f,    0.67f, .66f, 0.4f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.0f, -0.25f,  0.67f, .66f, 0.4f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, -0.25f,  0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f,
	0.25f, 0.5f, 0.0f,    0.14f, 0.1f, 0.03f,   0.0f, 0.0f,   1.0f, 0.0f, 0.0f
};

//Posiciones iniciales para la marioneta
void ColocarMarioneta(GLfloat* vertices, GLfloat* aux) {
	//Torzo (0,1)
	for (int i = 0; i < N * 24; i++) {
		vertices[i] = bloque[i];
		if (i % N == 0) //x
			vertices[i] = (8 * vertices[i] - 1) / 4;
		else if (i % N == 1) //y
			vertices[i] = (4 * vertices[i] - 1) / 2;
		else if (i % N == 2) //z
			vertices[i] = (8 * vertices[i] + 1) / 8;
		else if (i % N == 4) //g
			vertices[i] += 0.67f;
		else if (i % N == 5) //b
			vertices[i] += 0.66f;
	}
	//Brazo Izquierdo (1,2) 
	for (int i = N * 24 * 1; i < N * 24 * 2; i++) {
		vertices[i] = brazo[i - N * 24 * 1];
		if (i % N == 0) //x
			vertices[i] -= 0.5f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
	}
	//Mano Izquierda (2,3)
	for (int i = N * 24 * 2; i < N * 24 * 3; i++) {
		vertices[i] = bloque[i - N * 24 * 2];
		if (i % N == 0) //x
			vertices[i] -= 0.5f;
		if (i % N == 1) //y
			vertices[i] = 0.75 * vertices[i] - 0.375f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
		else if (i % N == 3) //r
			vertices[i] += 0.67f;
		else if (i % N == 4) //g
			vertices[i] += 0.66f;
		else if (i % N == 5) //b
			vertices[i] += 0.4f;
	}
	//Dedos Izquierdos (3,4)
	for (int i = N * 24 * 3; i < N * 24 * 4; i++) {
		vertices[i] = bloque[i - N * 24 * 3];
		if (i % N == 0) //x
			vertices[i] -= 0.5;
		else if (i % N == 1) //y
			vertices[i] = 0.25 * vertices[i] - 0.5f;
		else if (i % N == 2) //z
			vertices[i] = 1.25 * vertices[i] + 0.1875f;
		else if (i % N == 3) //r
			vertices[i] += 0.67f;
		else if (i % N == 4) //g
			vertices[i] += 0.66f;
		else if (i % N == 5) //b
			vertices[i] += .4f;
	}
	//Brazo Derecho (4,5)
	for (int i = N * 24 * 4; i < N * 24 * 5; i++) {
		vertices[i] = brazo[i - N * 24 * 4];
		if (i % N == 0) //x
			vertices[i] += 0.25f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
	}
	//Mano Derecha (5,6)
	for (int i = N * 24 * 5; i < N * 24 * 6; i++) {
		vertices[i] = bloque[i - N * 24 * 5];
		if (i % N == 0) //x
			vertices[i] += 0.25f;
		if (i % N == 1) //y
			vertices[i] = 0.75 * vertices[i] - 0.375f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
		else if (i % N == 3) //r
			vertices[i] += 0.67f;
		else if (i % N == 4) //g
			vertices[i] += 0.66f;
		else if (i % N == 5) //b
			vertices[i] += 0.4f;
	}
	//Dedos Derechos (6,7)
	for (int i = N * 24 * 6; i < N * 24 * 7; i++) {
		vertices[i] = bloque[i - N * 24 * 6];
		if (i % N == 0) //x
			vertices[i] += 0.25;
		else if (i % N == 1) //y
			vertices[i] = 0.25 * vertices[i] - 0.5f;
		else if (i % N == 2) //z
			vertices[i] = 1.25 * vertices[i] + 0.1875f;
		else if (i % N == 3) //r
			vertices[i] += 0.67f;
		else if (i % N == 4) //g
			vertices[i] += 0.66f;
		else if (i % N == 5) //b
			vertices[i] += .4f;
	}
	//Pierna Izquierda (7,8)
	for (int i = N * 24 * 7; i < N * 24 * 8; i++) {
		vertices[i] = bloque[i - N * 24 * 7];
		if (i % N == 0) //x
			vertices[i] -= 0.25f;
		else if (i % N == 1) //y
			vertices[i] -= 1.f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
		else if (i % N == 3) //r
			vertices[i] += 0.27f;
		else if (i % N == 4) //g
			vertices[i] += 0.21f;
		else if (i % N == 5) //b
			vertices[i] += .62f;
	}
	//Pie Izquierdo (8,9)
	for (int i = N * 24 * 8; i < N * 24 * 9; i++) {
		vertices[i] = pie[i - N * 24 * 8];
		if (i % N == 0) //x
			vertices[i] -= 0.25f;
		else if (i % N == 1) //y
			vertices[i] = 0.75*vertices[i] - 1.375f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
	}
	//Zapato Izquierdo (9,10)
	for (int i = N * 24 * 9; i < N * 24 * 10; i++) {
		vertices[i] = bloque[i - N * 24 * 9];
		if (i % N == 0) //x
			vertices[i] -= 0.25;
		else if (i % N == 1) //y
			vertices[i] = 0.25 * vertices[i] - 1.5f;
		else if (i % N == 2) //z
			vertices[i] = 1.25 * vertices[i] + 0.1875f;
		else if (i % N == 3) //r
			vertices[i] += 0.39f;
		else if (i % N == 4) //g
			vertices[i] += 0.39f;
		else if (i % N == 5) //b
			vertices[i] += .41f;
	}
	//Pierna Derecha (10,11)
	for (int i = N * 24 * 10; i < N * 24 * 11; i++) {
		vertices[i] = bloque[i - N * 24 * 10];
		if (i % N == 1) //y
			vertices[i] -= 1.f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
		else if (i % N == 3) //r
			vertices[i] += 0.27f;
		else if (i % N == 4) //g
			vertices[i] += 0.21f;
		else if (i % N == 5) //b
			vertices[i] += .62f;
	}
	//Pie Derecho (11,12)
	for (int i = N * 24 * 11; i < N * 24 * 12; i++) {
		vertices[i] = pie[i - N * 24 * 11];
		if (i % N == 1) //y
			vertices[i] = 0.75 * vertices[i] - 1.375f;
		else if (i % N == 2) //z
			vertices[i] += 0.125f;
	}
	//Zapato Derecho (12,13)
	for (int i = N * 24 * 12; i < N * 24 * 13; i++) {
	vertices[i] = bloque[i - N * 24 * 12];
	if (i % N == 1) //y
		vertices[i] = 0.25 * vertices[i] - 1.5f;
	else if (i % N == 2) //z
		vertices[i] = 1.25 * vertices[i] + 0.1875f;
	else if (i % N == 3) //r
		vertices[i] += 0.39f;
	else if (i % N == 4) //g
		vertices[i] += 0.39f;
	else if (i % N == 5) //b
		vertices[i] += .41f;
	}
	//Cabeza (13,14)
	for (int i = N * 24 * 13; i < N * 24 * 14; i++) {
		vertices[i] = cabeza[i - N * 24 * 13];
		if (i % N == 0) //x
			vertices[i] = 2 * vertices[i] - 0.25f;
		else if (i % N == 1) //y
			vertices[i] += .5f;
		else if (i % N == 2) //z
			vertices[i] = 2 * vertices[i] + 0.25;
	}
	for (int i = 0; i < 24 * N * BLOCKS; i++) {
		aux[i] = vertices[i];
	}
}

// Nos ayuda a animar nuestros objetos
void animar(int a, int b, glm::mat4 mat, GLfloat* vertices) {
	GLfloat x, y, z;
	for (int i = N * 24 * a; i < N * 24 * b; i++) {
		if (i % N == 0) {
			x = vertices[i];
			y = vertices[i + 1];
			z = vertices[i + 2];

			glm::vec4 v = mat * glm::vec4(x, y, z, 1.f);
			vertices[i] = v[0];
			vertices[i + 1] = v[1];
			vertices[i + 2] = v[2];
		}
	}
}

//Matiene ciertos objetos unidos a la marioneta
void keepuno(int a, GLfloat* vertices) { 
	glm::vec3 dif(1.f);
	glm::vec3 aux(
		(vertices[N * 24 * a + (11 * 0) + 0] * 0.5 + vertices[N * 24 * a + (11 * 3) + 0] * 0.5),
		(vertices[N * 24 * a + (11 * 0) + 1] * 0.5 + vertices[N * 24 * a + (11 * 3) + 1] * 0.5),
		(vertices[N * 24 * a + (11 * 0) + 2] * 0.5 + vertices[N * 24 * a + (11 * 3) + 2] * 0.5));
	if (a == 1) {
		dif = glm::vec3 (
			-0.375 - (vertices[N * 24 * a + (11 * 6) + 0] * 0.5 + aux[0] * 0.5),
			0.3750 - (vertices[N * 24 * a + (11 * 6) + 1] * 0.5 + aux[1] * 0.5),
			0.0000 - (vertices[N * 24 * a + (11 * 6) + 2] * 0.5 + aux[2] * 0.5));
	}
	else if (a == 4) {
		dif = glm::vec3(
			0.375 - (vertices[N * 24 * a + (11 * 6) + 0] * 0.5 + aux[0] * 0.5),
			0.3750 - (vertices[N * 24 * a + (11 * 6) + 1] * 0.5 + aux[1] * 0.5),
			0.0000 - (vertices[N * 24 * a + (11 * 6) + 2] * 0.5 + aux[2] * 0.5));
	}
	else if (a == 7) {
		dif = glm::vec3(
			-0.1250 - (vertices[N * 24 * a + (11 * 6) + 0] * 0.5 + aux[0] * 0.5),
			-0.6250 - (vertices[N * 24 * a + (11 * 6) + 1] * 0.5 + aux[1] * 0.5),
			0.00000 - (vertices[N * 24 * a + (11 * 6) + 2] * 0.5 + aux[2] * 0.5));
	}
	else if (a == 10) {
		dif = glm::vec3(
			0.12500 - (vertices[N * 24 * a + (11 * 6) + 0] * 0.5 + aux[0] * 0.5),
			-0.6250 - (vertices[N * 24 * a + (11 * 6) + 1] * 0.5 + aux[1] * 0.5),
			0.00000 - (vertices[N * 24 * a + (11 * 6) + 2] * 0.5 + aux[2] * 0.5));
	}
	for (int i = N * 24 * a; i < N * 24 * (a + 3); i++) {
		if (i % N == 0) {
			vertices[i] += dif[0];
			vertices[i + 1] += dif[1];
			vertices[i + 2] += dif[2];
		}
	}
}

//Matiene ciertos objetos unidos a la marioneta
void keepdos(int a, GLfloat* vertices){
	glm::vec3 dif(0.f);
	glm::vec3 aux(
		(vertices[N * 24 * a + (11 * 3) + 0] * 0.5 + vertices[N * 24 * a + (11 * 6) + 0] * 0.5),
		(vertices[N * 24 * a + (11 * 3) + 1] * 0.5 + vertices[N * 24 * a + (11 * 6) + 1] * 0.5),
		(vertices[N * 24 * a + (11 * 3) + 2] * 0.5 + vertices[N * 24 * a + (11 * 6) + 2] * 0.5));
	dif = glm::vec3(
		(vertices[N * 24 * (a - 1) + (11 * 0) + 0] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 0] * 0.5) - aux[0],
		(vertices[N * 24 * (a - 1) + (11 * 0) + 1] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 1] * 0.5) - aux[1],
		(vertices[N * 24 * (a - 1) + (11 * 0) + 2] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 2] * 0.5) - aux[2]);
	for (int i = N * 24 * a; i < N * 24 * (a + 2); i++) {
		if (i % N == 0) {
			vertices[i] += dif[0];
			vertices[i + 1] += dif[1];
			vertices[i + 2] += dif[2];
		}
	}
}

//Matiene ciertos objetos unidos a la marioneta
void keeptres(int a, GLfloat* vertices){
	glm::vec3 dif(1.f);
	if (a == 13) {
		glm::vec3 aux(
			(vertices[N * 24 * a + (11 * 0) + 0] * 0.5 + vertices[N * 24 * a + (11 * 5) + 0] * 0.5),
			(vertices[N * 24 * a + (11 * 0) + 1] * 0.5 + vertices[N * 24 * a + (11 * 5) + 1] * 0.5),
			(vertices[N * 24 * a + (11 * 0) + 2] * 0.5 + vertices[N * 24 * a + (11 * 5) + 2] * 0.5));
		dif = glm::vec3 (0.0 - aux[0], 0.5f - aux[1], 0.0 - aux[2]);
	}
	else {
		glm::vec3 aux(
			(vertices[N * 24 * a + (11 * 3) + 0] * 0.75 + vertices[N * 24 * a + (11 * 7) + 0] * 0.25),
			(vertices[N * 24 * a + (11 * 3) + 1] * 0.75 + vertices[N * 24 * a + (11 * 7) + 1] * 0.25),
			(vertices[N * 24 * a + (11 * 3) + 2] * 0.75 + vertices[N * 24 * a + (11 * 7) + 2] * 0.25));
		aux = glm::vec3(
			(aux[0] * 0.5 + vertices[N * 24 * a + (11 * 6) + 0] * 0.5),
			(aux[1] * 0.5 + vertices[N * 24 * a + (11 * 6) + 1] * 0.5),
			(aux[2] * 0.5 + vertices[N * 24 * a + (11 * 6) + 2] * 0.5));
		dif = glm::vec3(
			(vertices[N * 24 * (a - 1) + (11 * 0) + 0] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 0] * 0.5) - aux[0],
			(vertices[N * 24 * (a - 1) + (11 * 0) + 1] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 1] * 0.5) - aux[1],
			(vertices[N * 24 * (a - 1) + (11 * 0) + 2] * 0.5 + vertices[N * 24 * (a - 1) + (11 * 5) + 2] * 0.5) - aux[2]);
	}
	for (int i = N * 24 * a; i < N * 24 * (a + 1); i++) {
		if (i % N == 0) {
			vertices[i] += dif[0];
			vertices[i + 1] += dif[1];
			vertices[i + 2] += dif[2];
		}
	}
}

//Le permite al usuario manipular la marioneta
int dato = -1;
void test(GLFWwindow* window, GLfloat* vertices) {
	glm::mat4 mat(1.f);
	if (glfwGetKey(window, GLFW_KEY_T) == GLFW_PRESS) {
		std::cout << "Ingresa el dato" << std::endl;
		std::cin >> dato;
	}
	if (dato == 1 || dato == 2 || dato == 3 || dato == 4 || dato == 5 || dato == 6 || dato == 7
		|| dato == 8 || dato == 9 || dato == 10 || dato == 11 || dato == 12 || dato == 13) {
		if (glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(-1.f), glm::vec3(1.f, 0.f, 0.f));
		}
		if (glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(1.f), glm::vec3(1.f, 0.f, 0.f));
		}
		if (glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(-1.f), glm::vec3(0.f, 1.f, 0.f));
		}
		if (glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(1.f), glm::vec3(0.f, 1.f, 0.f));
		}
		if (glfwGetKey(window, GLFW_KEY_U) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(-1.f), glm::vec3(0.f, 0.f, 1.f));
		}
		if (glfwGetKey(window, GLFW_KEY_O) == GLFW_PRESS) {
			mat = glm::rotate(mat, glm::radians(1.f), glm::vec3(0.f, 0.f, 1.f));
		}
		if (dato == 1 || dato == 4 || dato == 7 || dato == 10) {
			animar(dato, dato + 3, mat, vertices);
			keepuno(dato, vertices);
		}
		else if (dato == 2 || dato == 5 || dato == 8 || dato == 11) {
			animar(dato, dato + 2, mat, vertices);
			keepdos(dato, vertices);
		}
		else if (dato == 3 || dato == 6 || dato == 9 || dato == 12 || dato == 13) {
			animar(dato, dato + 1, mat, vertices);
			keeptres(dato, vertices);
		}
	}
}

//Genera nuestra pila con la secuencia de animacion
void GeneraAnimacion(pila<Move>& P) {
	glm::mat4 mat(1.f);
	glm::mat4 mat2(1.f);
	glm::mat4 mat3(1.f);

	//CABEZA
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 4; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 8; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 4; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 6; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 12; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 6; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 6; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for (int i = 0; i < 12; i++) P.push({ 13,14,mat });
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.0f, 0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.0f, -0.5f, 0.f));
	for(int i = 0; i < 6; i++) P.push({ 13,14,mat });
	
	//REGRESAMOS
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-10.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));//
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));//
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));//
	mat3 *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));//
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 8,10,mat });
		P.push({ 5,7,mat3 });
	}
	//SALUDAR y MOVER PIE
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));//
	mat *= glm::translate(glm::vec3(-0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.4375f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));//
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));//
	mat3 *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));//
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 9; i++) {
		P.push({ 9,10,mat });
		P.push({ 6,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));//
	mat *= glm::translate(glm::vec3(-0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.4375f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));//
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));//
	mat3 *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));//
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 18; i++) {
		P.push({ 9,10,mat });
		P.push({ 6,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));//
	mat *= glm::translate(glm::vec3(-0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.4375f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));//
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));//
	mat3 *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));//
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 9; i++){
		P.push({ 9,10,mat });
		P.push({ 6,7,mat3 });
	}
	//DOBLAR RODILLA y CODO
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, -1.0f, 0.f));//
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 1.0f, 0.f));//
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	mat3 *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));//
	mat3 *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));//
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 8,10,mat });
		P.push({ 5,7,mat3 });
	}
	//ALZAR PIERNA y BRAZO
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}
	mat2 = glm::mat4(1.f);
	mat = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.125f, 0.5f, 0.f));
	mat3 = glm::mat4(1.f);
	mat3 *= glm::translate(glm::vec3(0.375f, 0.375f, 0.f));
	mat3 *= glm::rotate(mat2, glm::radians(10.f), glm::vec3(0.f, 0.f, 1.f));
	mat3 *= glm::translate(glm::vec3(-0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) {
		P.push({ 7,10,mat });
		P.push({ 4,7,mat3 });
	}

	//REGRESAMOS
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 10,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 10,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 10,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-3.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 15; i++) P.push({ 11,13,mat });
	//MOVIENDO PIE
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 12,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 18; i++) P.push({ 12,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for(int i = 0; i < 9; i++) P.push({ 12,13,mat });
	//DOBLAR RODILLA
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -1.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(3.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 1.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 15; i++) P.push({ 11,13,mat });
	//ALZAR PIERNA
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 10,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 10,13,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(0.125f, -0.5f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(-0.125f, 0.5f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 10,13,mat });

	//REGRESAMOS
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(10.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 1,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 1,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 1,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 2,4,mat });
	//SALUDANDO
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 6; i++) P.push({ 3,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 12; i++) P.push({ 3,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 12; i++) P.push({ 3,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.4375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.4375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 6; i++) P.push({ 3,4,mat });
	//DOBLAR CODO
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.0f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-3.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, 0.0f, 0.f));
	mat2 = glm::mat4(1.f);//
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(70.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::rotate(mat2, glm::radians(-35.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(45.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f)); 
	for (int i = 0; i < 15; i++) P.push({ 2,4,mat });
	//ALZAR BRAZO
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-5.f), glm::vec3(1.f, 0.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 9; i++) P.push({ 1,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(5.f), glm::vec3(0.f, 1.f, 0.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 1,4,mat });
	mat = glm::mat4(1.f);
	mat2 = glm::mat4(1.f);
	mat *= glm::translate(glm::vec3(-0.375f, 0.375f, 0.f));
	mat *= glm::rotate(mat2, glm::radians(-10.f), glm::vec3(0.f, 0.f, 1.f));
	mat *= glm::translate(glm::vec3(0.375f, -0.375f, 0.f));
	for (int i = 0; i < 7; i++) P.push({ 1,4,mat });
}