/* 6. Determine e informe a faixa et�ria de uma pessoa, a partir do seu ano de nascimento e do
ano atual. Faixas:
 0 a 9 anos: crian�a
 10 a 11 anos: pr�-adolescente
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

    printf("Vamos classificar sua faixa et�ria, para isso, me informe o ano em que voc� nasceu e o ano atual: \n");
    scanf("%d%d", &AnoNascimento, &AnoAtual);

    //Calculadora de idade
    idade = AnoAtual - AnoNascimento;

    //Verificando a faixa et�ria
    if (idade >= 0 && idade <= 9){
        printf("Faixa et�ria: CRIAN�A \n");
    }else if (idade >= 10 && idade <= 11){
            printf("Faixa et�ria: PR�-ADOLESCENTE \n");
    }else if (idade >= 12 && idade <= 18){
            printf("Faixa et�ria: ADOLESCENTE \n");
    }else if (idade >= 19 && idade <= 25){
            printf("Faixa et�ria: JOVEM \n");
    }else if (idade >= 26 && idade <= 59){
            printf("Faixa et�ria: ADULTO \n");
    }else{
            printf("Faixa et�ria: IDOSO \n");
    }


    system("pause");
return 0;
}
