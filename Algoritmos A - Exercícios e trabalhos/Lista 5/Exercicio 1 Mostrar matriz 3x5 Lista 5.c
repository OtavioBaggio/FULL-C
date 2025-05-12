/* 1. Ler uma matriz informada pelo usuário, com tamanho 3 x 5. Mostrar seus elementos
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[3][5];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("Linha %d, Coluna %d = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 3x5:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }


return 0;
}
