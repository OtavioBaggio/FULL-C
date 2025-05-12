/* 5. Um produtor organizou as �reas de sua lavoura da seguinte forma:
        A00 A01 A02 A03
        A10 A11 A12 A13

    Em cada �rea, ele aplicou diferentes formas de tratamento do solo e das plantas (insumos, pesticidas...).
Ap�s realizar a colheita, ele armazenou os dados da produtividade (quantidade de sacos/hectare) de cada
uma das �reas.
a) Utilize uma matriz para armazenar os valores da produtividade de cada �rea
b) Leia os dados armazenados em cada �rea
c) Calcule e exiba a m�dia de produtividade da lavoura
d) Identifique e mostre as �reas que produziram acima da m�dia e abaixo da m�dia
*/
#include <stdio.h>
#define L 2
#define C 4
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float A[L][C];
    int i, j;
    float soma, media;

    //Exercicio a) e b)
    printf("Informe a produtividade da �rea (sacos/hectare)\n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%f", &A[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%.1f\t", A[i][j]);
        }
        printf("\n");
    }

    //Exerc�cio c)
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            soma = soma + A[i][j];
            //soma += A[i][j];
        }
    }
    media = soma / 8;
    printf("\nM�dia de produtividade = %.1f sacos/hectares\n", media);

    //Exercicio d)
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(A[i][j] > media){
                printf("A[%d][%d] = %.1f\n", i, j, A[i][j]);
            }
        }
    }
    printf("\n�reas abaixo da m�dia:\n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(A[i][j] < media){
                printf("A[%d][%d] = %.1f\n", i, j, A[i][j]);
            }
        }
    }



return 0;
}
