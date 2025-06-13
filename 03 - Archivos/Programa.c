//  DEclaraciones de preprocesador
#include <stdio.h>         // PAra la I/O (flujos)
#include <stdlib.h>         // Para system()

#define pausa system("pause")
#define cls system("cls")

// Declaraciones Globales
FILE *entrada;          // declaración de variable de tipo FILE
FILE *salida;

int main()
{
   char cadena[80];
   entrada = fopen("Programa.c","r");
   if(entrada == NULL)
   {
      printf("El archivo no se pudo abrir\n"); 
      pausa;
      exit(1);          //  Termino el prgrama con código 1
   }
   salida = fopen("Copia de Programa.c","w");
   if(salida == NULL)
   {
      printf("El archivo no se pudo crear\n"); 
      pausa;
      exit(2);          //  Termino el prgrama con código 1
   }
   while( !feof(entrada) ) 
   {
      fgets(cadena, 80, entrada);
      printf("%s", cadena);
      fprintf(salida,"%s", cadena);
   }
   fclose(entrada);
   pausa;
   return 0;
}

