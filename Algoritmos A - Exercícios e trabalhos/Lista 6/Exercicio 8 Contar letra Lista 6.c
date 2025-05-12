/* Ler uma palavra qualquer e uma letra qualquer. Contar quantas vezes esta letra é encontrada na palavra
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    char palavra[100];
    char letra;
    int i;
    int cont = 0;

    //Lendo e Mostrando a palavra e a letra
    printf("\tInforme uma palavra e uma letra e veremos quantas vezes esta letra é encontrada nessa palavra\n");
    printf("\nDigite a palavra: ");
    scanf("%s", palavra);

    printf("\nDigite a letra: ");
    scanf(" %c", &letra);

    // Contando quantas vezes a letra aparece na palavra
    for(i = 0; i < strlen(palavra); i++){
        if(palavra[i] == letra){
            cont++;
        }
    }

    //Mostrando o resultado
    printf("\nA letra '%c' aparece %d vez(es) na palavra '%s'", letra, cont, palavra);




return 0;
}
