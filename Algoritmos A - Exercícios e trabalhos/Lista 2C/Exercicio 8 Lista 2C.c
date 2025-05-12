/* 8. Escreva um algoritmo que leia o número de inscrição de um nadador, sua idade e sexo (F
ou M). O algoritmo deve escrever a categoria do nadador, conforme a tabela:
   Idade           Sexo            Categoria
6 a 8 anos          F            Infantil A-F
6 a 8 anos          M            Infantil A-M
9 a 11 anos       F ou M         Infantil B
12 a 14 anos      F ou M         Juvenil A
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int numero_inscricao, idade;
    char sexo;

    // Solicita ao usuário que insira o número de inscrição, a idade e o sexo do nadador
    printf("Digite o número de inscrição do nadador: ");
    scanf("%d", &numero_inscricao);
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    printf("Digite o sexo do nadador (F ou M): ");
    scanf(" %c", &sexo);

    // Determina a categoria do nadador com base na idade e sexo
    if (idade >= 6 && idade <= 8) {
        if (sexo == 'F' || sexo == 'f') {
            printf("Categoria: Infantil A-F\n");
        } else if (sexo == 'M' || sexo == 'm') {
            printf("Categoria: Infantil A-M\n");
        }
    } else if (idade >= 9 && idade <= 11) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 12 && idade <= 14) {
        printf("Categoria: Juvenil A\n");
    } else {
        printf("Categoria não disponível para esta idade.\n");
    }


    system("pause");
return 0;
}
