/* 3 - Escrever um algoritmo para ler quatro valores inteiros, calcular a sua m�dia, e escrever na tela os que s�o
superiores � m�dia.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    //Vari�veis
    int Valor[4];
    int i;
    int soma = 0;
    float media;

    //Pedindo a usu�rio os 4 valores
    printf("\tInforme 4 valores para se calcular e obter a sua m�dia...\n");
    for(i = 0; i < 4; i++){
        printf("Insira o valor %d: ", i+1);
        scanf("%d", &Valor[i]);
        soma += Valor[i];  //Calculando a soma dos valores
    }

    //Realizando a m�dia dos valores obtidos
    media = soma / 4;
    printf("\nA m�dia dos valores �: %.1f", media);

    //Verificando quais valores s�o superiores a m�dia
    printf("\n\nValores superiores � m�dia:\n");
    for(i = 0; i < 4; i++){
        if(Valor[i] > media){
            printf("\n%d � maior que a m�dia!", Valor[i]);
        }
    }



return 0;
}
