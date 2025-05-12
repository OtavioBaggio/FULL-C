/* 3. Somar uma sequencia de números digitados enquanto os números são diferentes de zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num = 1, soma = 0;

    printf("Digite uma sequência de números, informar o número 0 (ZERO) forçará a parada do programa\n");

    while (num != 0){
        printf("Digite um número:\n");
        scanf("%d", &num);
        soma = num + soma;
    }
    printf("A soma dos números digitados é de: %d \n", soma);


    system("pause");
return 0;
}
