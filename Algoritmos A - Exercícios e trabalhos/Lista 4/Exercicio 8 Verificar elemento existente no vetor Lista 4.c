/* 8. Faça um algoritmo que leia um vetor V de 10 posições e, após, verifica se um número N,
fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão
escrever a mensagem "O número fornecido não existe no vetor!".
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

    printf("Digite um número: ");
    scanf("%d", &N);
    for(i = 0; i < 10; i++){
        if(N == v[i]){
            printf("%d existe na posicão %d\n", N, i);
            existe = 1;
        }
    }

    if(existe == 0){
        printf("O valor %d não existe no vetor!\n", N);
    }



return 0;
}
