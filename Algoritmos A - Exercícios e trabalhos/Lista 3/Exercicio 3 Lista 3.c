/* 3. Somar uma sequencia de n�meros digitados enquanto os n�meros s�o diferentes de zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num = 1, soma = 0;

    printf("Digite uma sequ�ncia de n�meros, informar o n�mero 0 (ZERO) for�ar� a parada do programa\n");

    while (num != 0){
        printf("Digite um n�mero:\n");
        scanf("%d", &num);
        soma = num + soma;
    }
    printf("A soma dos n�meros digitados � de: %d \n", soma);


    system("pause");
return 0;
}
