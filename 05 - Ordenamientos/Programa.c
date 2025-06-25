// Sección de directivas de Preprocesador
#include <stdio.h>      //  Para printf(), scanf() y gets() 
#include <stdlib.h>     //  PAra system()
#include <string.h>     //  Para el manejo de cadenas

#define pausa system("pause")   // Para pausa en pantalla
#define cls system("cls")       // Para limpiar pantalla
#define SIZE 10                 // Tamaño de mi arreglo

int main()
{
    int i;
    char cadena[80];
    char cadena2[80];
    
    printf("Introdice una cadena: ");
    gets(cadena);
    i = 0;
    while( cadena[i] != '\0')
    {
        printf("cadena[%i] = %c\n", i, cadena[i]);
        i++;
    }
    printf("El tamaño de la cadena es %d\n", strlen(cadena) );
    
    strcpy(cadena2, cadena);        //  Copiar cadena en cadena2
    printf("%s == %s\n", cadena, cadena2);
    if ( !strcmp(cadena2,cadena) )
        printf("Son iguales\n");
    else
        printf("No son iguales\n");
    
    strcpy(cadena, "Saludos");
    strcpy(cadena2, "Programas");

    printf("%d\n", strcmp(cadena, cadena2));
    printf("%d\n", strcmp(cadena2, cadena));

    printf("%s\n", strcat(cadena, cadena2));
    pausa;
    return 0;
}
