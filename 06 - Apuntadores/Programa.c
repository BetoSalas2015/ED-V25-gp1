#include <stdio.h>
#include <stdlib.h>

#define pausa system("pause")
#define cls system("cls")
#define limpia_buffer fflush(stdin)

int main()
{
    /*int costo = 60;
    int *pointer; 

    pointer = &costo;           //  Se crea un alias

    printf("Costo = %d \n", costo);
    printf("La direccion de memoria de costo es %p\n", &costo);
    printf("La direccion de memoria de pointer es %p\n", &pointer);
    printf("La direccion de memoria guardada en pointer es %p\n", pointer);
    printf("El contenido de memoria guardado pointer es %d\n", *pointer);

    *pointer = 100;

    printf("Costo = %d \n", costo);*/

    int a, b, c;
    int *pa, *pb, *pc;

    pa = &a;
    pb = &b;
    pc = &c;

    printf("Dame el primer numero: ");
    scanf("%d", pa);
    printf("Dame el Segundo numero: ");
    scanf("%d", pb);

    *pc = *pa + *pb;

    printf("El resultado es %d\n", *pc);
    pausa;
    return 0;
}
