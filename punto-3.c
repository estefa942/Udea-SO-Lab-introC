//P2. Escriba un programa en C para imprimir la siguiente secuencia (dado el numero de renglones):
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void secuencia(int numeroRenglones);

int main(){

    int numeroRenglones;
    printf("Ingrese el número de renglones: ");
    scanf("%d",&numeroRenglones);

    secuencia(numeroRenglones);

    return 0;
    
}


void secuencia(int numeroRenglones){

    char value = 1+'0';
    char secuencia[numeroRenglones];
    
    char secuenciaFinal[numeroRenglones];
    strcpy(secuencia, &value);
    //char* pointer = secuenciaFinal;

    for(int i=0; i<numeroRenglones; i++){
        printf("%s \n",secuencia);
       
        if(i%2 == 0){
            value = '0';
        }else{
            value = '1';
            
        }
        strcpy(secuenciaFinal,&value);
        strcat(secuenciaFinal, secuencia);

        strcpy(secuencia, secuenciaFinal);
       

    }
   

}




