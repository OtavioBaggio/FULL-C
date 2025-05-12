/* 2. Implemente um algoritmo para somar duas matrizes de tamanho 3 x 3. As matrizes podem ser lidas ou
geradas no algoritmo.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[3][3], a2[3][3], i, j;
    int MatrizSoma[3][3];

    //Lendo e Mostrando as matrizes 3x3
    printf("\tDigite os elementos de duas matrizes 3x3 para gerar uma nova matriz resultado da soma entre elas\n");
    printf("\tInforme os elementos da primeira matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Primeira matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\tAgora, informe os elementos da Segunda matriz:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a2[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", a2[i][j]);
        }
        printf("\n");
    }

    //Mostrando a soma entre as duas matrizes
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            MatrizSoma[i][j] = a[i][j] + a2[i][j];
        }
        printf("\n");
    }
    printf("Matriz Soma 3x3:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", MatrizSoma[i][j]);
        }
        printf("\n");
    }


return 0;
}
