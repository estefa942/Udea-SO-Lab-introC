//P8. La utilización de las computadoras en la educación se conoce como Instrucción Asistida por Computadora (CAI). 
// Un problema que se desarrolla en los entornos CIA es la fatiga del alumno. Este problema puede ser enfrentado variando el diálogo 
// de la computadora para retener la atención del alumno. Modifique el programa del ejercicio anterior de modo que este escoja de forma 
// aleatoria uno de cuatro posibles mensajes tanto para respuestas correctas como para respuestas incorrectas. 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>   //time()

int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
int isCorrect(int respuestaUsuario, int respueta);
void generarRespuesta(int tipoMensaje, int aleatorio);

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
            int mensajeRespuesta = generar_aleatorios(1,4);
            generarRespuesta(2,mensajeRespuesta);
            return 0;

        }else{
            int mensajeRespuesta = generar_aleatorios(1,4);
            generarRespuesta(1,mensajeRespuesta);
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

void generarRespuesta(int tipoMensaje, int aleatorio){
    if(tipoMensaje == 1){
        switch(aleatorio){
            case 1:
                printf("Muy bien!\n");
                break;
            case 2:
                printf("Excelente!\n");
                break;
            case 3:
                printf("Buen trabajo!\n");
                break;
            case 4:
                printf("Sigue haciéndolo bien!\n");
                break;
        }
    }else{
           switch(aleatorio){
            case 1:
                printf("No. Por favor trata de nuevo.\n");
                break;
            case 2:
                printf("Incorrecto. Trata una vez más.\n");
                break;
            case 3:
                printf("No te rindas!\n");
                break;
            case 4:
                printf("No. Trata de nuevo\n");
                break;
        }
    }
}