#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

#define pausa system("pause")
#define cls system("cls")
#define limpia_buffer fflush(stdin)
#define SIZE 10

void imprime_arreglo(int *ptr)
{
    int i;
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d, ", *ptr);
        *ptr++;
    }
     putchar('\n');
}

void burbuja(int *arr, int size)
{
	int *i = NULL, *j = NULL, pass, *temp = NULL;
    temp = (int *) malloc( sizeof(int));  // temp es dinámica
	for(i = arr; i  < (i + size); ++i)
	{
		pass = 1;
		for(j = i + 1; j < (i + size); ++j)
		{
			if(*i > *j)
			{
				*temp = *i;
				*i = *j;
				*j = *temp;
				pass = 0;
			}
		}
		if(pass)
			return;
	}
}

void insert(int arr[], int n)
{
	int y, i, k;
	for(k = 1; k < n; k++)
	{
		y = arr[k];
		for(i = k - 1;(i >= 0 && y < arr[i]); i--)
			arr[i + 1] = arr[i];
		arr[i + 1] = y;
	}
}

int main()
{
    int *arreglo = NULL;               // alias para el arreglo
    int *recorre = NULL;
    int i;
    srand( time(NULL));         //  generamos la semilla a partir de la hora

    arreglo = (int *) malloc( sizeof(int) * SIZE);
    recorre = arreglo;      // recorre apunta al mismo lugar de memoria que arreglo
    for (i = 0; i < SIZE; i++ )
    {
        *recorre = rand() % 500;
        recorre++;  
    }
    
    imprime_arreglo(arreglo);

    burbuja(arreglo, SIZE);

    imprime_arreglo(arreglo);

    pausa;
    return 0;
}
