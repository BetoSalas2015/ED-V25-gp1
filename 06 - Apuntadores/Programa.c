#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause")
#define cls system("cls")
#define limpia_buffer fflush(stdin)
#define NL putchar('\n')

void por_valor(int x)
{
    printf("x = %d \n", x);
    x = 5;
    printf("x = %d \n", x);
}

void por_referencia(int *x)
{
    printf("x = %d \n", *x);
    *x = 5;
    printf("x = %d \n", *x);
}

int argumentos()
{
    int costo = 60;

    printf("Costo = %d\n", costo);
    por_valor(costo);
    printf("Costo = %d\n", costo);
    por_referencia(&costo);
    printf("Costo = %d\n", costo);

    scanf("%d", &costo);

    pausa;
    return 0;
}

int arreglos()
{
    char arreglo[5];
    char *ptr[5] = { NULL, NULL, NULL, NULL, NULL };

    printf("La dirección de arreglo[0] es %p\n", &arreglo[0]);
    printf("La dirección de arreglo[1] es %p\n", &arreglo[1]);
    printf("La dirección de arreglo[2] es %p\n", &arreglo[2]);
    printf("La dirección de arreglo[3] es %p\n", &arreglo[3]);
    printf("La dirección de arreglo[4] es %p\n\n", &arreglo[4]);

    ptr[0] = arreglo;      //  Eqivale a  ptr = &arreglo[0]
    ptr[2] = &arreglo[4];

    printf("La direccion guardada en ptr[0] es %p\n", ptr[0]);
    printf("La direccion guardada en ptr[2] es %p\n", ptr[2]);


    pausa;
    return 0;
}

int aritmetica()
{
    int arreglo[5] = {0, 1, 2, 3, 4};
    int *ptr; 

    ptr = &arreglo[2];

    printf(" ptr - 2 = %p, *ptr - 2 = %d\n", ptr - 2, *ptr - 2);
    printf(" ptr - 1 = %p, *ptr - 1 = %d\n", ptr - 1, *ptr - 1);
    printf(" ptr = %p, *ptr = %d\n", ptr, *ptr);
    printf(" ptr + 1 = %p, *ptr + 1 = %d\n", ptr + 1, *ptr + 1);
    printf(" ptr + 2 = %p, *ptr + 2 = %d\n", ptr + 2, *ptr + 2);

    ptr = ptr + 1;

    printf("\n ptr - 2 = %p, *ptr - 2 = %d\n", ptr - 2, *ptr - 2);
    printf(" ptr - 1 = %p, *ptr - 1 = %d\n", ptr - 1, *ptr - 1);
    printf(" ptr = %p, *ptr = %d\n", ptr, *ptr);
    printf(" ptr + 1 = %p, *ptr + 1 = %d\n", ptr + 1, *ptr + 1);
    printf(" ptr + 2 = %p, *ptr + 2 = %d\n", ptr + 2, *ptr + 2);

    pausa;
    return 0;
}

int main() 
{
    int a[] = {0, 1, 2, 3, 4};
    int i, *p;
    
    //  Ejercicio 1
    for ( i = 0; i < 5; i++)
    {
        printf("%d, \t", a[i]);
    }
    NL;

    //  Ejercicio 2
    for (p = &a[0]; p <= &a[4]; p++)
    {
        printf("%d, \t", *p);
    }
    NL;

    //  Ejercicio 3
    for (p = a, i = 0; p+i <= a+4; p++, i++)
    {
        printf("%d, \t", *(p+i));
    }
    NL;

    // Ejercicio 4
    for(p=&a[0], i=1; i<=5; i++)
		printf("%d, \t", p[i]);
	NL;

    // Ejercicio 5
    for(p=a+4; p>=a; p--)
		printf("%d, \t", *p);
	NL;
    

    pausa;
    return 0;
}