/* 5. Fazer um algoritmo que leia valores para as vari�veis hora, minuto e segundo; verificando e
escrevendo se elas correspondem a um hor�rio v�lido ou n�o. Para um hor�rio ser v�lido, a hora
deve estar no intervalo de 0 a 23, o minuto e o segundo no intervalo de 0 a 59.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int hora, minuto, segundo;

    // Solicita ao usu�rio que digite os valores para hora, minuto e segundo
    printf("Digite a hora: \n");
    scanf("%d", &hora);
    printf("Digite o minuto: \n");
    scanf("%d", &minuto);
    printf("Digite o segundo: \n");
    scanf("%d", &segundo);

    if (hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59 && segundo >= 0 && segundo <= 59) {
        printf("Hor�rio v�lido: %02d:%02d:%02d\n", hora, minuto, segundo);
    } else {
        printf("Hor�rio inv�lido.\n");
    }

    system("pause");
return 0;
}


