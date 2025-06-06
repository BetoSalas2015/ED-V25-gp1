//  Directivas de Preprocesador
#include <stdio.h>      // archivos de cabecera o .h
#include <stdlib.h>
#include <string.h>     // PAra la gestion de cadenas

#define pausa system("pause")
#define cls system("cls")

// Declaraciones globales
struct Persona              // Definición de la estructura Persona
{ 
    char nombre[30];        //  Campos de la estructura
    int edad; 
    float altura; 
    char sexo;
};

typedef struct Persona datos;  // Formalización del tipo de datos "datos"

// Declaración de Funciones
int main()  // Punto de entrada
{ 
    int contador;
    datos miPersona;
    /*printf("El tamaño de la estructura Persona es: %d bytes\n", sizeof(struct Persona) );
    printf("El tamaño de datos es: %d bytes\n", sizeof(datos) );
    printf("El tamaño de persona es: %d bytes\n", sizeof(miPersona) );
    printf("El tamaño de int es: %d bytes\n", sizeof(int) );
    printf("El tamaño de char es: %d bytes\n", sizeof(char) );
    printf("El tamaño de float es: %d bytes\n", sizeof(float) );
    printf("El tamaño de double es: %d bytes\n", sizeof(double) );*/

    printf("Dame el nombre: ");
    gets(miPersona.nombre);
    printf("Dame la edad: ");
    scanf("%d", &miPersona.edad);
    printf("Dame la altura: ");
    scanf("%f", &miPersona.altura);
    printf("Dame el sexo: ");
    scanf("%c", &miPersona.sexo);
    
    printf("El nombre de la persona es %s\n", miPersona.nombre);
    printf("La edad de la persona es %d\n", miPersona.edad);
    printf("La altura de la persona es %f\n", miPersona.altura);   
    fflush(stdin);
    printf("El sexo de la persona es %c\n", miPersona.sexo);
    pausa; 
}

