/* 4. Em um concurso, a identificação das cadeiras da sala são armazenadas em uma matriz. Considere que
existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
para armazenar a identificação das cadeiras que é informada pelo usuário. A matriz deve ser exibida. Após,
apresentar ao usuário a mensagem: “Insira o número da fila:” para que o algoritmo leia o número de uma
fila e mostra a identificação de todas as cadeiras desta fila.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int a[6][7], i, j;
    int fila;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            printf("Fileira %d Cadeira %d: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\nIdentificação das Fileiras e Cadeiras da sala de aula em formato de Matriz 6 x 7\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Identificando a fila
    printf("Diga o número de uma fileira para ver as cadeiras que as compõem:\n");
    scanf("%d", &fila);
    if (fila >= 1 && fila <= 6) {
        printf("Cadeiras da fileira %d:\n", fila);
        for (j = 0; j < 7; j++) {
            printf("%d\t", a[fila - 1][j]); // Exibindo as cadeiras da fila selecionada
        }
        printf("\n");
    } else {
        printf("Número de fileira inválido. Insira um número de 1 a 6.\n");
    }


return 0;
}
