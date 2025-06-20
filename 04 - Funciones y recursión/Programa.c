//  DEclaraciones de preprocesador
#include <stdio.h>         // PAra la I/O (flujos)
#include <stdlib.h>         // Para system()

#define pausa system("pause")
#define cls system("cls")

// Declaraciones Globales

// Declaracion de funciones
// factorial iterativo
int factoriali(int n)
{
   int i;
   int fact = 1;
   for(i = 1; i <= n; i++ ) 
   {
      fact *= i;
   }
   return fact;
}
// factorial recursivo
//  n! = 1           Si n = 1
//  n! = n * (n-1)!  Si n > 1
int factorial(int n) {
   if (n == 1)
      return 1;
   else
      return n * factorial(n -1);
}


int main()
{
   printf("El factorial de 5 es %d\n", factoriali(5));
   printf("El factorial de 5 es %d\n", factorial(5));
   pausa;
   return 0;
}

