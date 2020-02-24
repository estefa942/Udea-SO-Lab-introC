//P4. Escribir un programa que lea dos números x y n y en una función, calcule la suma de la progresión geométrica:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int calculateSum(int x, int n);
double pow(double x, double y);

int main(){

    int x;
    int n;
    int result;
    printf("Calcular la suma de la progresión geométrica de dos números x y n.\n Ingrese los valores x y n\n");
    scanf("%d %d",&x,&n);

    result = calculateSum(x,n);
    printf("Resultado: %d\n",result);
}

int calculateSum(int x, int n){

    int sum = 1;
    
    for(int i=1; i<n;i++){

        double resultPow = pow(x,i);
        sum = sum + resultPow;
    }
    return sum;
}