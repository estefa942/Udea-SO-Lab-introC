//P7. Las computadoras están jugando un papel creciente en la educación. Escriba un programa que ayudaría a un alumno de escuela primaria a aprender a multiplicar (tablas entre 1 y 10). Utilice rand() para producir dos enteros positivos de un dígito. A continuación debería imprimir una pregunta coma la siguiente:
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>   //time()

int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
int isCorrect(int respuestaUsuario, int respueta);

int main(void){
    srand(time(NULL));
    int respuestaUsuario;
    int result = 0;
    int exit = 1;
    printf("¡Vamos a practicar las tablas de multiplicar!\n");
    do{
    int num1 = generar_aleatorios(1,10);
    int num2 = generar_aleatorios(1,10);
    int respuesta = num1*num2;
 

        while(result == 0){

            printf("¿Cuánto es %d veces %d? \n",num1, num2);
            scanf("%d",&respuestaUsuario);
            result = isCorrect(respuestaUsuario, respuesta);

        }
    result = 0;
    printf("Si desea continuar presione 1, por el contrario desea terminar presione 0: ");
    scanf("%d",&exit);

    }while(exit == 1);
    printf("Regresa pronto :3\n");
    return 0;
}


int isCorrect(int respuestaUsuario, int respuesta){
     if(respuestaUsuario != respuesta){
            printf("No. Por favor intenta nuevamente\n");
            return 0;

        }else{
            printf("Muy bien!\n");
            return 1;
        }
        return 0;

}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}