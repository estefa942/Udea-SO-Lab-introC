//Escriba un programa en C para encontrar la suma de las series: 1 - x^2/2! + x^4/4! - ...         gcc -Wall punto-6.c -o punto-6.out -lm 

#include <stdio.h>
#include <math.h>

int factorial(int n);
double secuencia(int a, int b);

int main()
{
    int entrada, terminos;
    double suma;
    printf("Valor de entrada de X: ");
    scanf("%d", &entrada);
    printf("Numero de términos: ");
    scanf("%d", &terminos);
    suma = secuencia(entrada, terminos);    
    printf("La suma de la serie es: %ff\n", suma);      
    return 0;
}

int factorial(int n) {
  if (n > 0) {
    return n*factorial(n-1);
  }
  else {
    return 1;
  }
}

double secuencia(int a, int b){
    double resultado = 0;
    int aux = 0;
    for(int i = 1; i <= b; i++){
        if(i%2 == 0){
            resultado = resultado - pow(a, aux)/factorial(aux);
        } else {
            resultado = resultado + pow(a, aux)/factorial(aux);
        }
        aux = aux + 2;
    }
    return resultado;
}

