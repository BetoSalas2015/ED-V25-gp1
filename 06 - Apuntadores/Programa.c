#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause")
#define cls system("cls")
#define limpia_buffer fflush(stdin)

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

int main()
{
    int costo = 60;

    printf("Costo = %d\n", costo);
    por_valor(costo);
    printf("Costo = %d\n", costo);
    por_referencia(&costo);
    printf("Costo = %d\n", costo);

    pausa;
    return 0;
}

int arreglos()
{
    char arreglo[5];
    char *ptr[5];

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
