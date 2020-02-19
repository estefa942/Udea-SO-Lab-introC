#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char calcularTablaMultiplicacion(int numeroFinal);

int main() {
    int numeroFinal;
    char *tabla;
    printf("Ingrese el numero final: ");
    scanf("%d", &numeroFinal);
    printf("La tabla de multiplicación desde 1 hasta %d:\n", numeroFinal);
    calcularTablaMultiplicacion(numeroFinal);
    //tabla = (char*)malloc(sizeof(char)*(calcularTablaMultiplicacionDelUno(numeroFinal)+1)); /* llamada a la funcion */
    //printf("La tabla de multiplicación desde 1 hasta %d:\n %s", numeroFinal,tabla);
    return 0;
}

char calcularTablaMultiplicacion(int numeroFinal){
    char tabla[10] = "";
    for(int j = 1; j <= 10; j++){
        for (int i = 1; i <= numeroFinal; i++)
        {
            int multi = j * i;
            //char resultado = ("%d x %d = %d",j,i,multi);
            //strcat(tabla,resultado);
            printf("%dx%d = %d, ",i,j, multi);
        }
        printf("\n");
        
    }
    
    return 0;
    
}
