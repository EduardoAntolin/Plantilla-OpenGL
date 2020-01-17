// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>
#include <stdlib.h>


#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>


using namespace std;

int main()
{

	//Declarar una ventana
	GLFWwindow* window;

	//Si no se pudo inciiar el GLFW
	//Terminamos la ejecucion 
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	//	Si se pudo iniciar el GLFW
	//Inicializamos la ventana

	window = glfwCreateWindow(800, 600, "ventana", NULL, NULL);

	//Si no se pudo crear la ventana terminamos la ejecucion
	//Terminamos la ejecucion
		if (!window) {
			glfwTerminate();
			exit(EXIT_FAILURE);
	}
		//Establecemo la ventana como contexto
		glfwMakeContextCurrent(window);

		//Ciclo de dibujo (Draw loop)
		while (!glfwWindowShouldClose(window)) {
			//Establecer region de dibujo 
			glViewport(0, 0, 800, 600);
			//Establecemos el color de borrado
			//Valores RGBA
			glClearColor(1, 0.2, 0.5, 1);
			//Borrar
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

			//Actualizar valores y dibujar

			glfwSwapBuffers(window);
		}
		//Despues del ciclo de dibujo
		//Eliminamos venta y procesos de glfw
		glfwDestroyWindow(window);
		glfwTerminate();
}







// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
