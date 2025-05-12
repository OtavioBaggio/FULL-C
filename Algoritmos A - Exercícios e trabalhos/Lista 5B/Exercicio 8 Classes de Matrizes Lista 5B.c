/* 8. Escrever um programa para ler uma matriz 4x4 de n�meros reais, e depois determinar se ela se enquadra
em uma das seguintes classes de matrizes:
=> Matriz sim�trica: A[i][j] = A[j][i], para todo i e j
=> Matriz diagonal: A[i][j] = 0, para i != j
=> Matriz triangular superior: A[i][j] = 0, para i < j
=> Matriz triangular inferior: A[i][j] = 0, para i > j
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int A[4][4];
    int i, j;
    int simetrica = 1, diagonal = 1, triangularSuperior = 1, triangularInferior = 1;

    printf("Informe os elementos de uma matriz 4x4 apenas com N�MEROS REAIS, logo em seguira ser� feito sua classifica��o.\n");

    //Lendo e mostrando a matriz 4x4:
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    //Verificando sua classifica��o:
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(A[i][j] != A[j][i]) {
                simetrica = 0;
            }
            if(i != j && A[i][j] != 0) {
                diagonal = 0;
            }
            if(i < j && A[i][j] != 0) {
                triangularSuperior = 0;
            }
            if(i > j && A[i][j] != 0) {
                triangularInferior = 0;
            }
        }
    }

    // Mostrando os resultados:
    printf("\n\tCLASSIFICA��ES:\n");
    if(simetrica) {
        printf("A matriz � SIM�TRICA\n");
    } else {
        printf("A matriz N�O � SIM�TRICA\n");
    }
    if(diagonal) {
        printf("A matriz � DIAGONAL\n");
    } else {
        printf("A matriz N�O � DIAGONAL\n");
    }
    if(triangularSuperior) {
        printf("A matriz � TRIANGULAR SUPERIOR\n");
    } else {
        printf("A matriz N�O � TRIANGULAR SUPERIOR\n");
    }
    if(triangularInferior) {
        printf("A matriz � TRIANGULAR INFERIOR\n");
    } else {
        printf("A matriz N�O � TRIANGULAR INFERIOR\n");
    }

return 0;
}
