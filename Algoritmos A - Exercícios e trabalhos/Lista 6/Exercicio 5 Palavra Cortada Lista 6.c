/* 5. Ler uma palavra e uma letra qualquer. Mostrar a palavra cortada na primeira posição em que encontrar a
letra informada.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char palavra[100];
    char letra;
    int i, posicao = -1;

    //Lendo a palavra e a letra
    printf("\tDigite uma palavra agora, e em seguida informe uma letra para cortar a palavra na primeira posição:\n");
    scanf("%s", palavra);

    printf("Letra: \n");
    scanf(" %c", &letra);

    //Para encontrar a posição do primeiro encontra de letra
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] == letra){
            posicao = i;
            break;
        }
    }

    //Cortando a palavra na posição encontrada
    if(posicao != -1){
        printf("\nPalavra Cortada: ");
        for(i = 0; i < posicao; i++){
            printf("%c", palavra[i]);
        }
        printf("\n");
    }else{
            printf("A letra '%c' não foi encontrada na palavra '%s'.\n", letra, palavra);
    }



return 0;
}
