/* 6. Determine e informe a faixa etária de uma pessoa, a partir do seu ano de nascimento e do
ano atual. Faixas:
 0 a 9 anos: criança
 10 a 11 anos: pré-adolescente
 12 a 18 anos: adolescente
 18 a 25 anos: jovem
 26 a 59 anos: adulto
 60 em diante: idoso
 */
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int AnoNascimento, AnoAtual, idade;

    printf("Vamos classificar sua faixa etária, para isso, me informe o ano em que você nasceu e o ano atual: \n");
    scanf("%d%d", &AnoNascimento, &AnoAtual);

    //Calculadora de idade
    idade = AnoAtual - AnoNascimento;

    //Verificando a faixa etária
    if (idade >= 0 && idade <= 9){
        printf("Faixa etária: CRIANÇA \n");
    }else if (idade >= 10 && idade <= 11){
            printf("Faixa etária: PRÉ-ADOLESCENTE \n");
    }else if (idade >= 12 && idade <= 18){
            printf("Faixa etária: ADOLESCENTE \n");
    }else if (idade >= 19 && idade <= 25){
            printf("Faixa etária: JOVEM \n");
    }else if (idade >= 26 && idade <= 59){
            printf("Faixa etária: ADULTO \n");
    }else{
            printf("Faixa etária: IDOSO \n");
    }


    system("pause");
return 0;
}
