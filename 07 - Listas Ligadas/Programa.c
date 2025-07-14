#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define pausa system("pause")
#define cls system("cls")
#define limpia_buffer fflush(stdin)

//  Sección de declaraciones globales
struct NODO
{
    char info;  
    struct NODO *sig;
};

typedef struct NODO nodo;

nodo *raiz = NULL;              //  Una lista vacía 

void insert(char dato)
{
    nodo *nuevo = NULL;
    nuevo = (nodo *) malloc( sizeof(nodo) ); 
    if (nuevo == NULL)      // Hubo memoria disponible?
    {
        printf("Ya no hay memoria disponible.");
        return;
    }
    nuevo -> info = dato;       //  Guardamos la información
    nuevo -> sig = NULL;
    if(raiz == NULL)            //  La lista está vacía?
    {
        raiz = nuevo;
    }
    else        //  La lista ya no está vacía  
    {
        nodo *recorre = raiz;
        while (recorre -> sig != NULL)
        {
            recorre = recorre -> sig;
        }
        recorre -> sig = nuevo;
    }
}

void insert1(char dato)
{
    nodo *nuevo = NULL;
    nuevo = (nodo *) malloc( sizeof(nodo) ); 
    if (nuevo == NULL)      // Hubo memoria disponible?
    {
        printf("Ya no hay memoria disponible.");
        return;
    }
    nuevo -> info = dato;       //  Guardamos la información
    nuevo -> sig = NULL;
    if(raiz == NULL)            //  La lista está vacía?
    {
        raiz = nuevo;
    }
    else        //  La lista ya no está vacía  
    {
        nodo *recorre = raiz;
        while (recorre -> sig != NULL)
        {
            recorre = recorre -> sig;
        }
        recorre -> sig = nuevo;
    }
}

void insertn(char dato, int pos)
{
    nodo *nuevo = NULL;
    nuevo = (nodo *) malloc( sizeof(nodo) ); 
    if (nuevo == NULL)      // Hubo memoria disponible?
    {
        printf("Ya no hay memoria disponible.");
        return;
    }
    nuevo -> info = dato;       //  Guardamos la información
    nuevo -> sig = NULL;
    if(raiz == NULL)            //  La lista está vacía?
    {
        raiz = nuevo;
    }
    else        //  La lista ya no está vacía  
    {
        nodo *recorre = raiz;
        while (recorre -> sig != NULL)
        {
            recorre = recorre -> sig;
        }
        recorre -> sig = nuevo;
    }
}

void imprime_lista()
{
    nodo *recorre = raiz;
    while (recorre != NULL)
    {
        printf("%c,", recorre ->info);
        recorre = recorre -> sig;
    }
    putchar('\n');
}

int main()
{
    imprime_lista();
    insert('R');
    insert('o');
    insert('b');
    insert('e');
    insert('r');
    insert('t');
    insert('o');

    imprime_lista();

    pausa;
    return 0;
}


int primitivas()
{
  

    //  Primitiva Insert Básica
    raiz = (nodo *) malloc( sizeof(nodo) );    //  crea el alias (apodo)
    raiz -> info = 'B';
    raiz ->sig = NULL;

    // primitiva Remueve Básica
    free(raiz);             //  libera memoria reservada por malloc()
    raiz = NULL;

    pausa;
    return 0;
}
