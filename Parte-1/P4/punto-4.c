//P3. Escriba una función llamada múltiplo que tome dos enteros y determine si el segundo es múltiplo del primero. 
//La función deberá tomar dos argumentos enteros y devolver 1 
//si el segundo es un múltiplo del primero y 0 si no. Luego, 
//utilice esta función en un programa que acepte como entrada una serie de pares de enteros.

#include<stdio.h>
#include<stdlib.h>

int isMultiple(int numero1, int numero2);

int main(){
    int numero1;
    int numero2;
    int result;
    

    printf("Ingrese los dos números: \n");  
    scanf("%d %d",&numero1, &numero2);
   
    result = isMultiple(numero1, numero2);
    printf("Resultado: %d\n",result);
   
    
    return 0;
}

int isMultiple(int numero1, int numero2){
    int result;
    if(numero2<numero1){
        if(numero1 % numero2 == 0){
            return 1;
        }else{
            return 0;
        }

    }
    return 0;

  
}