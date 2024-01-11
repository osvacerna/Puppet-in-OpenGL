#pragma once
#include<iostream>
#include<filesystem>
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<stb/stb_image.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>

#include"Texture.h"
#include"shaderClass.h"
#include"VAO.h"
#include"VBO.h"
#include"EBO.h"
#include"Camera.h"
#include "pila.h"

#define BLOCKS 14
#define N 11

struct Move {
	int a;
	int b;
	glm::mat4 mat;
};

void GeneraAnimacion(pila<Move> &P);

void animar(int a, int b, glm::mat4 mat, GLfloat* vertices);

void keepuno(int a, GLfloat* vertices);
void keepdos(int a, GLfloat* vertices);
void keeptres(int a, GLfloat* vertices);
void test(GLFWwindow* window, GLfloat* vertices);

void ColocarMarioneta(GLfloat* vertices, GLfloat* aux);
