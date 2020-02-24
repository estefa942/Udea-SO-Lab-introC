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
    return 0;
}

char calcularTablaMultiplicacion(int numeroFinal){
    char tabla[10] = "";
    for(int j = 1; j <= 10; j++){
        for (int i = 1; i <= numeroFinal; i++)
        {
            int multi = j * i;
            printf("%dx%d = %d, ",i,j, multi);
        }
        printf("\n");
        
    }
    
    return 0;
    
}
