//  DEclaraciones de preprocesador
#include <stdio.h>         // PAra la I/O (flujos)
#include <stdlib.h>         // Para system()

//  Sección de prototipos
int factoriali(int n);
int factorial(int n);
int multiplicacion(int a, int b);

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

//  (a * b) = a                  Si b = 1
//  (a * b) = a + (a * b -1)     Si b > 1
int multiplicacion(int a, int b)
{
   if (b == 1)
      return a;
   else
      return a + multiplicacion(a, b -1);
}

//  x^y = 1             Si y = 0
//  x^y = x * x^y-1     Si y > 1
int potencia(int x, int y)
{
   if (y == 0)
      return 1;
   else
      return x * potencia(x, y -1);
}

// Fi = 1               Si i = 0 o i = 1
// Fi = Fi-1 + Fi-2     Si i > 1
int fibonacci(int i)
{
   if (i == 0 || i == 1)
      return 1;
   else
      return fibonacci(i - 1) + fibonacci(i -2);
}  

// PIi = 4              Si i = 1
// PIi = PIi - 4/2i-1     Si i es par 
// PIi = PIi + 4/2i-1     Si i no es par 
float pi(int i) 
{
   if (i == 1)
      return 4.0;
   if ((i % 2) == 0)
      return pi(i-1) - 4.0 / ((2 * i )- 1);
   else  
      return pi(i-1) + 4.0 / ((2 * i) - 1); 
}

void hanoi(int n, char origen, char destino, char aux)
{

}


int main()
{
   printf("El factorial de 5 es %d\n", factoriali(5));
   printf("El factorial de 5 es %d\n", factorial(5));
   printf("La multipicacion de 3 * 5 es %d\n", multiplicacion(5, 3));
   printf("potencia de 2 a la 7 es %d\n", potencia(2,7));
   printf("El fibonacci de 5 es %d\n", fibonacci(5));
   printf("Pi a 20 terminos es %f\n", pi(50000));
   pausa;
   return 0;
}

