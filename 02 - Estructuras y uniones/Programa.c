//  Directivas de Preprocesador
#include <stdio.h>      // archivos de cabecera o .h
#include <stdlib.h>
#include <string.h>     // Para la gestion de cadenas

#define pausa system("pause")
#define cls system("cls")

// Declaraciones globales
union Persona
{
    char Nombre[15];
    char Apellido[15];
};

struct Datos              // Definición de la estructura Persona
{ 
    union Persona nombrePersona;        //  Campos de la estructura
    int edad; 
    float altura; 
    char sexo;
};

typedef struct Datos datos;  // Formalización del tipo de datos "datos"

// Declaración de Funciones
int main()  // Punto de entrada
{ 
    int contador;
    datos miPersona[5];
    /*printf("El tamaño de la estructura Persona es: %d bytes\n", sizeof(struct Persona) );
    printf("El tamaño de datos es: %d bytes\n", sizeof(datos) );
    printf("El tamaño de persona es: %d bytes\n", sizeof(miPersona) );
    printf("El tamaño de int es: %d bytes\n", sizeof(int) );
    printf("El tamaño de char es: %d bytes\n", sizeof(char) );
    printf("El tamaño de float es: %d bytes\n", sizeof(float) );
    printf("El tamaño de double es: %d bytes\n", sizeof(double) );*/

    strcpy(miPersona[2].nombrePersona.Nombre, "Juan");
    strcpy(miPersona[2].nombrePersona.Apellido, "Perez");
    printf("Dame el nombre: ");
    gets(miPersona[2].nombrePersona.Nombre);
    printf("Dame el apellido: ");
    gets(miPersona[2].nombrePersona.Apellido);
    printf("Dame la edad: ");
    scanf("%d", &miPersona[2].edad);
    printf("Dame la altura: ");
    scanf("%f", &miPersona[2].altura);
    printf("Dame el sexo: ");
    fflush(stdin);
    scanf("%c", &miPersona[2].sexo);
    
    printf("El nombre de la persona es %s %s\n", miPersona[1].nombrePersona.Nombre, miPersona[2].nombrePersona.Apellido);
    printf("La edad de la persona es %d\n", miPersona[1].edad);
    printf("La altura de la persona es %f\n", miPersona[1].altura);   
    printf("El sexo de la persona es %c\n", miPersona[1].sexo);
    printf("El nombre de la persona es %s %s\n", miPersona[2].nombrePersona.Nombre, miPersona[2].nombrePersona.Apellido);
    printf("La edad de la persona es %d\n", miPersona[2].edad);
    printf("La altura de la persona es %f\n", miPersona[2].altura);   
    printf("El sexo de la persona es %c\n", miPersona[2].sexo);

    pausa; 
}

