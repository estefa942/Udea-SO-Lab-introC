#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char calcularTablaMultiplicacionDelUno(int numeroFinal);

int main() {
    int numeroFinal;
    char *tabla;
    printf("Ingrese el numero final: ");
    scanf("%d", &numeroFinal);
    tabla = (char*)malloc(sizeof(char)*(calcularTablaMultiplicacionDelUno(numeroFinal)+1)); /* llamada a la funcion */
    printf("La tabla de multiplicación desde 1 hasta %d:\n %s", numeroFinal,tabla);
    return 0;
}

char calcularTablaMultiplicacionDelUno(int numeroFinal){
    char tabla[10] = "";
    for (int i = 1; i < numeroFinal; i++)
    {
        int multi = 1 * i;
        // char resultado[10] = ("%d x 1 = %d",i,multi);
        // strcat(tabla,resultado);
        printf("%d x 1= %d", i , multi);
    }
    return *tabla;
    
}