/* 8. Fa�a um algoritmo para ler um n�mero natural e calcular quantos s�o m�ltiplos deste
n�mero maiores que ele e menores que 1000.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int NumN, i, contador = 0;

    printf("Digite um n�mero NATURAL POSITIVO:\n");
    scanf("%d", &NumN);

    if (NumN <= 0){
        printf("N�mero NEGATIVO, por favor insira um n�mero narutal POSITIVO...\n");
        return 1;
    }

    for (i = NumN + 1; i < 1000; i++){
        if (i % NumN == 0){
            contador++;
        }

    }
    printf("H� %d n�meros que s�o m�ltiplos de %d, maiores que ele e menores que 1000.\n", contador, NumN);


    system("pause");
return 0;
}
