/* 4. Escreva um programa que pede para o usuário digitar um número que corresponda a um
dia da semana. O programa deve apresentar na tela o nome do dia. Utilize o comando
switch.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int dia;

    printf("Digite um número de 1 a 7, e lhe direi qual dia da semana é de acordo com o número correspondente: \n");
    scanf("%d", &dia);

     // Utiliza o comando switch para verificar o número digitado e exibir o nome do dia correspondente
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido\n");
    }

    system("pause");
return 0;
}
