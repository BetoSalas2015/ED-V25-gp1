// Sección de directivas de Preprocesador
#include <stdio.h>      //  Para printf(), scanf() y gets() 
#include <stdlib.h>     //  PAra system(), rand() y srand()
#include <string.h>     //  Para el manejo de cadenas
#include <time.h>       // Para usar time()

#define pausa system("pause")   // Para pausa en pantalla
#define cls system("cls")       // Para limpiar pantalla
#define SIZE 10000                 // Tamaño de mi arreglo
#define MAXRAND 5000            // Límite de los números pseudo-aleatorios

void imprime_arreglo(int arreglo[])
{
    int i;
    for ( i = 0; i < SIZE; i++)
        printf("%d,", arreglo[i]);
    putchar('\n');
}

//  Programe función de ordenamiento aquí
void burbuja(int arr[], int n)
{

}

int main()
{
    int arreglo[SIZE];
    int i;

    srand( time(NULL) );                //  Definimos la semilla de los numeros aleatorios

    for ( i = 0; i < SIZE; i++)         // Llenamos el arreglo con números aleatorios
        arreglo[i] = rand() % MAXRAND;

    printf("Arreglo desordenado\n");  
    imprime_arreglo(arreglo);

    // invoque su algoritomo de ordenamiento aquí
    burbuja(arreglo, SIZE);
    
    printf("\nArreglo ordenado\n");
    imprime_arreglo(arreglo);

    pausa;
    return 0;
}
