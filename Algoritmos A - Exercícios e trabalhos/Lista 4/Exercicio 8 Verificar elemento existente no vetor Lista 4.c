/* 8. Fa�a um algoritmo que leia um vetor V de 10 posi��es e, ap�s, verifica se um n�mero N,
fornecido pelo usu�rio, existe no vetor. Se existir, indicar a(s) posi��o(�es), sen�o
escrever a mensagem "O n�mero fornecido n�o existe no vetor!".
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int v[10], i, N, existe = 0;

    printf("Digite os 10 elementos: \n");
    for(i = 0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("Digite um n�mero: ");
    scanf("%d", &N);
    for(i = 0; i < 10; i++){
        if(N == v[i]){
            printf("%d existe na posic�o %d\n", N, i);
            existe = 1;
        }
    }

    if(existe == 0){
        printf("O valor %d n�o existe no vetor!\n", N);
    }



return 0;
}
