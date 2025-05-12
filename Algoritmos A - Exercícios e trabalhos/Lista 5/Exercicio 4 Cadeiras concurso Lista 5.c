/* 4. Em um concurso, a identifica��o das cadeiras da sala s�o armazenadas em uma matriz. Considere que
existem 6 filas de cadeiras na sala e cada fila possui 7 cadeiras. Desenvolva um algoritmo com uma matriz
para armazenar a identifica��o das cadeiras que � informada pelo usu�rio. A matriz deve ser exibida. Ap�s,
apresentar ao usu�rio a mensagem: �Insira o n�mero da fila:� para que o algoritmo leia o n�mero de uma
fila e mostra a identifica��o de todas as cadeiras desta fila.
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
    printf("\nIdentifica��o das Fileiras e Cadeiras da sala de aula em formato de Matriz 6 x 7\n");
    for(i = 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Identificando a fila
    printf("Diga o n�mero de uma fileira para ver as cadeiras que as comp�em:\n");
    scanf("%d", &fila);
    if (fila >= 1 && fila <= 6) {
        printf("Cadeiras da fileira %d:\n", fila);
        for (j = 0; j < 7; j++) {
            printf("%d\t", a[fila - 1][j]); // Exibindo as cadeiras da fila selecionada
        }
        printf("\n");
    } else {
        printf("N�mero de fileira inv�lido. Insira um n�mero de 1 a 6.\n");
    }


return 0;
}
