/* 2. Desenvolva um algoritmo para ler quatro valores inteiros, calcular a sua média, e escrever na
tela os que são superiores à média.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int V1, V2, V3, V4;
    float Media;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Boas vindas usuário desconhecido\n");
    printf("Este é a calculadora de médias\n");
    printf("Porém....\n");
    printf("Não queremos saber só isso\n");
    printf("Irei lhe mostrar quais dos valores que você irá me informar a seguir, consiguiram superar a TEMÍVEL média\n");
    printf("Valor 1:\n");
    scanf("%d", &V1);
    printf("Valor 2:\n");
    scanf("%d", &V2);
    printf("Valor 3:\n");
    scanf("%d", &V3);
    printf("Valor 4:\n");
    scanf("%d", &V4);

    //cálculos
    Media = (V1 + V2 + V3 + V4) / 4;

    if (V1 > Media)
        printf("O primeiro valor é o Roberto Carlos\n");
    if (V2 > Media)
        printf("O segundo valor é o Michael Jackson\n");
    if (V3 > Media)
        printf("O terceiro valor é o Armadinho\n");
    if (V4 > Media)
        printf("O quarto valor é o zeca pagodinho\n");

    system("pause");
return 0;
}
