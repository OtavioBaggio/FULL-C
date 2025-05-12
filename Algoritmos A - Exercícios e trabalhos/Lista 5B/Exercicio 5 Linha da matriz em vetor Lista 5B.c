/* 5. Faça um algoritmo para ler uma matriz 3x4 e peça ao usuário para informar o número de uma linha da
matriz. Armazene a linha informada da matriz em um vetor e, por fim, mostre o vetor.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[3][4];
    int i, j;
    int linha, vetor[4];

    printf("\tInforme os elementos de uma matriz 3x4, após, informe o número de uma linha para mostrar-lhe em um vetor.\n");

    //Lendo e mostrando a matriz 3x4:
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 3x4:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Informando a linha da matriz:
    printf("\nInforme uma linha da matriz 3x4:\n");
    scanf("%d", &linha);

    if (linha >= 0 && linha < 3) {
        vetor[4];

        // Armazenando a linha escolhida no vetor
        for (j = 0; j < 4; j++) {
            vetor[j] = a[linha][j];
        }

        // Mostrando o vetor resultante
        printf("Vetor da linha %d:\n", linha);
        for (j = 0; j < 4; j++) {
            printf("%d\t", vetor[j]);
        }
        printf("\n");
    } else {
        printf("Número de linha inválido.\n");
    }



return 0;
}
