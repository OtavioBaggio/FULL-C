/* 9. Desenvolva um algoritmo para gerar uma matriz 4x4 e, depois, calcular e mostrar:
=> O somatório dos elementos da primeira coluna
=> O valor da multiplicação dos elementos da primeira linha
=> A soma da diagonal principal
=> A soma de todos os elementos da matriz
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[4][4], i, j;
    int SomaColuna = 0, MultiLinha = 1, SomaDiagonal = 0, SomaTotal = 0;

    printf("\tInforme os elementos de uma matriz 4x4, após isso saberemos:\n\n");
    printf("\t=> O somatório dos elementos da primeira coluna;\n");
    printf("\t=> O valor da multiplicação dos elementos da primeira linha;\n");
    printf("\t=> A soma da diagonal principal;\n");
    printf("\t=> A soma de todos os elementos da matriz;\n\n");

    //lendo e mostrando a matriz 4x4:
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Linha %d Coluna %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\n\tMatriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            //Somando elementos da primeira coluna:
            if(j == 0){
                SomaColuna += a[i][j];
            }
            //Multiplicando elementos da primeira linha:
            if(i == 0){
                MultiLinha *= a[i][j];
            }
            //Soma da diagonal principal:
            if(i == j){
                SomaDiagonal += a[i][j];
            }
            //Soma de todos os elementos da matriz:
            SomaTotal += a[i][j];
        }
    }
    printf("\n\tSomatório dos elementos da primeira coluna = %d", SomaColuna);
    printf("\n\tMultiplicação dos elementos da primeira linha = %d", MultiLinha);
    printf("\n\tSoma da diagonal principal = %d", SomaDiagonal);
    printf("\n\tSoma de todos os elementos da matriz = %d", SomaTotal);


return 0;
}
