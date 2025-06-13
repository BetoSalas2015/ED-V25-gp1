//  DEclaraciones de preprocesador
#include <stdio.h>         // PAra la I/O (flujos)
#include <stdlib.h>         // Para system()

#define pausa system("pause")
#define cls system("cls")

// Declaraciones Globales
FILE *archivo;          // declaración de variable de tipo FILE

int main()
{
   char cadena[80];
   archivo = fopen("Programa.c","r");
   if(archivo == NULL)
   {
      printf("El archivo no se pudo abrir\n"); 
      pausa;
      exit(1);          //  Termino el prgrama con código 1
   }
   while( !feof(archivo) ) 
   {
      fgets(cadena, 80, archivo);
      printf("%s", cadena);
   }
   fclose(archivo);
   pausa;
   return 0;
}

