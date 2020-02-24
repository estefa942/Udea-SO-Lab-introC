// (P9) Los sistemas más avanzados de CAI vigilan el rendimiento del alumno a lo largo de un periodo de tiempo. 
// La decisión para empezar un tema nuevo se basa a menudo en el éxito del alumno en relación con temas anteriores. 
// Modifique el programa del ejercicio anterior para contar el número de respuestas correctas e incorrectas del estudiante. 
// Una vez el estudiante decida terminar la ejecución del programa, el programa debe calcular y mostrar el porcentaje de 
// respuestas correctas respecto al total de preguntas que le hizo el programa. Si el porcentaje es menor a 75%, 
// el programa deberá imprimir el mensaje "Por favor pídele ayuda al instructor" y termina.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>   //time()

int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
int isCorrect(int respuestaUsuario, int respueta);
void generarRespuesta(int tipoMensaje, int aleatorio);
int correctas = 0, incorrectas = 0;

int main(void){
    srand(time(NULL));
    int respuestaUsuario;
    int result = 0;
    int exit = 1;
    int porcentaje, nPreguntas;
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
    nPreguntas = correctas + incorrectas;
    porcentaje = (correctas * 100) / nPreguntas;
    printf("El porcentaje de respuestas acertadas es: %d %% \n", porcentaje);
    if(porcentaje < 75){
        printf("Por favor pídele ayuda al instructor\n");
    }
    printf("Regresa pronto :3\n");
    return 0;
}


int isCorrect(int respuestaUsuario, int respuesta){
     if(respuestaUsuario != respuesta){
            incorrectas++;
            int mensajeRespuesta = generar_aleatorios(1,4);
            generarRespuesta(2,mensajeRespuesta);
            return 0;

        }else{
            correctas++;
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