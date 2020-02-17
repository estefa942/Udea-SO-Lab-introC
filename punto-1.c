#include <stdio.h>

float calcularComision(int valorVenta);

int main() {
    int valorVenta;
    float valorComision;
    printf("Ingrese el valor de la venta: ");
    scanf("%d", &valorVenta);
    valorComision = calcularComision(valorVenta); /* llamada a la funcion */
    printf("La comisión para el valor de venta %d es: %f\n", valorVenta, valorComision);
    return 0;
}

float calcularComision(int valorVenta){
    float valorComision;

    if (valorVenta >= 0 && valorVenta >= 20000){
        valorComision = valorVenta * 0.05;
    }
    if (valorVenta > 20000 && valorVenta <= 50000){
        valorComision = (valorVenta * 0.07) + 1000;
    }
    if (valorVenta > 50000){
        valorComision = (valorVenta * 0.1) + 3100;
    }
    return valorComision;
}