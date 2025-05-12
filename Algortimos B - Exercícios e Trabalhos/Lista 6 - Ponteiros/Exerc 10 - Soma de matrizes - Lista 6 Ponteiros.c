/* 10 Faça um programa que lê duas matrizes 3x3 e efetua a soma das matrizes usando funções. Use ponteiros para
manipular as matrizes nas funções. */

#include <stdio.h>
#include <locale.h>

void lerMatriz(int m[][3]){
    int i, j;

    for(i = 0, i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%i", &m[i][j]);
        }
        return 0;
    }
}

int main(){
setlocale(LC_ALL, "portuguese");
    int x[3][3], y[3][3];

    lerMatriz(x);
    lerMatriz(z);







return 0;
}
