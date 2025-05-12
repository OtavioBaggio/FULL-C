/* 3. Ler uma matriz 3 x 2 e um número informados pelo usuário. O algoritmo deve gerar uma nova matriz que é
o resultado da multiplicação do número pela matriz lida
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float a[3][2];
    float Num;
    int i, j;

    //Lendo a matriz 3x2
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("Linha %d Coluna %d = ", i, j);
            scanf("%f", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 3 x 2:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }

    //Lendo o número informado pelo usuário
    printf("Informe um número para multiplicar a matriz 3x2: \n");
    scanf("%f", &Num);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            a[i][j] = a[i][j] * Num;
        }
        printf("\n");
    }
    printf("Matriz 3x2 múltiplicada pelo número informado:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            printf("%.1f\t", a[i][j]);
        }
        printf("\n");
    }


return 0;
}
