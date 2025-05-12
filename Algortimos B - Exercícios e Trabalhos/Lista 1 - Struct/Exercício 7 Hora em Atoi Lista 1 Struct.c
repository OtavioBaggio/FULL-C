/* 7. Fazer um programa que leia uma string no formato hh:mm:ss, converta os elementos desta
strings em inteiros armazenando-os em uma estrutura e mostre o resultado na seguinte forma:
“hh hora(s), mm minuto(s) e ss segundo(s).” Para esta questão, utilize a função atoi() que
converte uma string em um número inteiro.
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct horario{
    int hora;
    int min;
    int seg;
};

int main(){
setlocale(LC_ALL, "portuguese");
    struct horario x;

    char aux[3];
    char horaLida[9];

    printf("Digite o horário HH:MM:SS\n");
    gets(horaLida);

    //Convertendo a string hora para int
    aux[0] = horaLida[0];
    aux[1] = horaLida[1];
    aux[2] = '\0';
    x.hora = atoi(aux);

    //Conversão dos minutos
    aux[0] = horaLida[3];
    aux[1] = horaLida[4];
    x.min = atoi(aux);

    //Conversão dos segundos
    aux[0] = horaLida[6];
    aux[1] = horaLida[7];
    x.seg = atoi(aux);

    printf("\nHorário informado:\n");
    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", x.hora, x.min, x.seg);

return 0;
}
