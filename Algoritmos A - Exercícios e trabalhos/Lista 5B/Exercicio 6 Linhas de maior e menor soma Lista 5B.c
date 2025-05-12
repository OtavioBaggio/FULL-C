/* 6. Faça um programa que leia uma matriz 4x3 e encontre a linha que possui a maior soma de seus elementos.
Mostre qual é a linha que possui a menor soma.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[4][3];
    int i, j;
    int linhaMenorSoma, linhaMaiorSoma, soma, MenorSoma, MaiorSoma;

    printf("\tInforme os elementos de uma matriz 4x3 e veremos qual a linha possui a maior e menor soma de seus elementos.\n");

    //Lendo e mostrando a matriz 4x3:
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 4x3:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

     // Inicializando as somas com a soma da primeira linha
    soma = 0;
    for(j = 0; j < 3; j++){
        soma += a[0][j];
    }
    MenorSoma = MaiorSoma = soma;
    linhaMenorSoma = linhaMaiorSoma = 0;

    // Calculando as somas das outras linhas e comparando
    for(i = 1; i < 4; i++){
        soma = 0;
        for(j = 0; j < 3; j++){
            soma += a[i][j];
        }
        if(soma < MenorSoma){
            MenorSoma = soma;
            linhaMenorSoma = i;
        }
        if(soma > MaiorSoma){
            MaiorSoma = soma;
            linhaMaiorSoma = i;
        }
    }

     // Mostrando os resultados
    printf("\nLinha com a maior soma: %d (Soma = %d)\n", linhaMaiorSoma, MaiorSoma);
    printf("Linha com a menor soma: %d (Soma = %d)\n", linhaMenorSoma, MenorSoma);



return 0;
}
