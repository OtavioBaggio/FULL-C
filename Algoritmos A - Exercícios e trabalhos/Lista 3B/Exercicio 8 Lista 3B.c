/* 8. Faça um algoritmo para ler um número natural e calcular quantos são múltiplos deste
número maiores que ele e menores que 1000.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int NumN, i, contador = 0;

    printf("Digite um número NATURAL POSITIVO:\n");
    scanf("%d", &NumN);

    if (NumN <= 0){
        printf("Número NEGATIVO, por favor insira um número narutal POSITIVO...\n");
        return 1;
    }

    for (i = NumN + 1; i < 1000; i++){
        if (i % NumN == 0){
            contador++;
        }

    }
    printf("Há %d números que são múltiplos de %d, maiores que ele e menores que 1000.\n", contador, NumN);


    system("pause");
return 0;
}
