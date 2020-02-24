//Escriba una función que tome un valor entero y devuelva el número con sus dígitos en reversa. Por ejemplo, dado el numero 7631, la función deberá devolver 1367.


#include <stdio.h>

int invertir (int number);

int main(){
    int numero, invertido;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);
    invertido = invertir(numero);
    printf("El número dado es %d y su inverso es: %d", numero, invertido);
    return 0;
}

int invertir(int number){
    int digit, invert = 0;
    while (number > 0){
        digit = number % 10;
        invert = invert * 10 + digit;
        number /= 10;
    }
    return invert;
}

