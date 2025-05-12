/* 3 - Escrever um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na tela os que são
superiores à média.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    //Variáveis
    int Valor[4];
    int i;
    int soma = 0;
    float media;

    //Pedindo a usuário os 4 valores
    printf("\tInforme 4 valores para se calcular e obter a sua média...\n");
    for(i = 0; i < 4; i++){
        printf("Insira o valor %d: ", i+1);
        scanf("%d", &Valor[i]);
        soma += Valor[i];  //Calculando a soma dos valores
    }

    //Realizando a média dos valores obtidos
    media = soma / 4;
    printf("\nA média dos valores é: %.1f", media);

    //Verificando quais valores são superiores a média
    printf("\n\nValores superiores à média:\n");
    for(i = 0; i < 4; i++){
        if(Valor[i] > media){
            printf("\n%d é maior que a média!", Valor[i]);
        }
    }



return 0;
}
