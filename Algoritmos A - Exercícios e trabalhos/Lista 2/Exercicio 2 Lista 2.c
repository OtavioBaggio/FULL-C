/* 2. Desenvolva um algoritmo para ler quatro valores inteiros, calcular a sua m�dia, e escrever na
tela os que s�o superiores � m�dia.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int V1, V2, V3, V4;
    float Media;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Boas vindas usu�rio desconhecido\n");
    printf("Este � a calculadora de m�dias\n");
    printf("Por�m....\n");
    printf("N�o queremos saber s� isso\n");
    printf("Irei lhe mostrar quais dos valores que voc� ir� me informar a seguir, consiguiram superar a TEM�VEL m�dia\n");
    printf("Valor 1:\n");
    scanf("%d", &V1);
    printf("Valor 2:\n");
    scanf("%d", &V2);
    printf("Valor 3:\n");
    scanf("%d", &V3);
    printf("Valor 4:\n");
    scanf("%d", &V4);

    //c�lculos
    Media = (V1 + V2 + V3 + V4) / 4;

    if (V1 > Media)
        printf("O primeiro valor � o Roberto Carlos\n");
    if (V2 > Media)
        printf("O segundo valor � o Michael Jackson\n");
    if (V3 > Media)
        printf("O terceiro valor � o Armadinho\n");
    if (V4 > Media)
        printf("O quarto valor � o zeca pagodinho\n");

    system("pause");
return 0;
}
