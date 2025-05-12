/*9 – Ler uma matriz A de inteiros com ordem 10x10. Ler, a seguir, 10 valores e verificar se cada valor lido é um
dos elementos da matriz. Se o valor for encontrado na matriz, exibir o valor encontrado e a posição do elemento
na matriz (por exemplo: “O valor X foi encontrado na posição I,J da matriz”).
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    //Variáveis
    int A[10][10];      //Matriz 10x10
    int val[10];        //Valor
    int pos;            //Posição do valor lido
    int i, j, k;        //Operadores

    //Solicitando ao usuário os vetores da matriz 10x10
    printf("\tInsira a seguir os elementos de uma matriz 10x10\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("Coluna %d Linha %d: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    //Mostrando a matriz
    printf("Matriz 10x10:\n");
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    //Lendo os 10 valores
    for(i = 0; i < 10; i++){
        printf("\t\nInsira o valor %d: \n", i+1);
        scanf("%d", &val[i]);
    }
     // Verificando se cada valor está na matriz
    for(i = 0; i < 10; i++) {
        pos = 0; // Verificando se o valor foi encontrado
        for(j = 0; j < 10; j++) {
            for(k = 0; k < 10; k++) {
                if(A[j][k] == val[i]) {
                    printf("O valor %d foi encontrado na posição %d,%d da matriz\n", val[i], j, k);
                    pos = 1;
                }
            }
        }
        if (!pos) {
            printf("O valor %d não foi encontrado na matriz\n", val[i]);
        }
    }



return 0;
}
