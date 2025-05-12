/* 4. Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o
menor elemento e a sua posição.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[80], i;

    //gerar o vetor ou inicializar
    for(i = 0; i < 80; i++){
        a[i] = rand()%100;
        printf("%d\t", a[i]);
    }


return 0;
}
