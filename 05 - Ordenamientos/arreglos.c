// Sección de directivas de Preprocesador
#include <stdio.h>      //  Para printf(), scanf() y gets() 
#include <stdlib.h>     //  PAra system()

#define pausa system("pause")   // Para pausa en pantalla
#define cls system("cls")       // Para limpiar pantalla
#define SIZE 10                 // Tamaño de mi arreglo

int main()
{
    int costo, i;
    
    int arreglo[SIZE] = {9,8,7,6,5,4,3,2,1,0}; // Directamente
    int matriz[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };

    for ( i = 0; i < SIZE; i++)
    {
        arreglo[i] = i;                 //  Manualmente
    }
    

    arreglo[4] = 3;
    return 0;
}
