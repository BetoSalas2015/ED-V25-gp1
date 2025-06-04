//  Directivas de Preprocesador
#include <stdio.h>      // archivos de cabecera o .h
#include <stdlib.h>

#define pausa system("pause")
#define cls system("cls")

// Declaraciones globales

// Declaración de Funciones
int main()  // Punto de entrada
{ 
    const float PI = 3.14159; 
    int edad;
    edad = 55;
    cls; 
    printf("Edad en b10 = %d, b8 = %o, b16 = %x, char = %c\n", edad, edad, edad, edad);  

    pausa; 
}

