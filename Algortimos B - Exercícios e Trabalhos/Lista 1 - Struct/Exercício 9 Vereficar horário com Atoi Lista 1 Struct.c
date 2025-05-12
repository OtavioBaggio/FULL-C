/* 9. Escrever um programa que l� um hor�rio hh:mm:ss e verifica se este est� correto.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>  //Para usar o Atoi sem erro

struct Horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){
setlocale(LC_ALL, "portuguese");

    struct Horario h;
    char aux[3];
    char horaLida[9];

    printf("Digite um hor�rio (hh:mm:ss) para verificar se est� correto: ");
    gets(horaLida);

    //Convertendo a string hora para int
    aux[0] = horaLida[0];
    aux[1] = horaLida[1];
    aux[2] = '\0';
    h.hora = atoi(aux);

    //" " " minuto para int
    aux[0] = horaLida[3];
    aux[1] = horaLida[4];
    h.minuto = atoi(aux);

    //" " " segundo para int
    aux[0] = horaLida[6];
    aux[1] = horaLida[7];
    h.segundo = atoi(aux);

    // Verifica��o se o hor�rio est� correto
    if ((h.hora >= 0 && h.hora <= 23) &&
        (h.minuto >= 0 && h.minuto <= 59) &&
        (h.segundo >= 0 && h.segundo <= 59)) {
        printf("\nO hor�rio digitado (%d:%d:%d) est� correto.\n",
               h.hora, h.minuto, h.segundo);
    } else {
        printf("\nO hor�rio digitado (%d:%d:%d) est� incorreto.\n",
               h.hora, h.minuto, h.segundo);
    }



return 0;
}
