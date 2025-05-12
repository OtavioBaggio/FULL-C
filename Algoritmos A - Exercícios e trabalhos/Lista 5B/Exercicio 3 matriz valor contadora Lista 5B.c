/* 3. Faça um programa que leia uma matriz 5x5. Após leia um valor qualquer e conte quantas vezes este valor
aparece na matriz.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[5][5], i, j;
    int valor, cont = 0;

    //Lendo e mostrando as matrizes 5x5
    printf("\tInsira os elementos de uma matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Coluna %d Linha %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 5x5:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Verificando o valor e quantas vezes ele aparece
    printf("Diga um valor para ver quantas vezes ele aparece na matriz:\n");
    scanf("%d", &valor);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i][j] == valor){
                cont++;
            }
        }
    }

    // Exibição do resultado
    printf("O valor %d aparece %d vezes na matriz.\n", valor, cont);

return 0;
}
