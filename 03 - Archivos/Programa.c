//  DEclaraciones de preprocesador
#include <stdio.h>         // PAra la I/O (flujos)
#include <stdlib.h>         // Para system()

#define pausa system("pause")
#define cls system("cls")

// Declaraciones Globales
FILE *archivo;          // declaración de variable de tipo FILE

int main()
{
   archivo = fopen("archivo.txt","w");

   fclose(archivo);
}

