/* 7. Escreva um algoritmo para ler a idade de uma pessoa e mostrar qual sua situa��o de eleitor,
conforme as seguintes condi��es: se a idade for menor que 16 anos, informar que a pessoa n�o est�
apta a votar. Se a idade for maior ou igual a 16 anos e menor que 18 anos ou superior a 70 anos,
informar que o voto � facultativo. Caso contr�rio, informar que o voto � obrigat�rio.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int idade;

    printf("Informe a idade do eleitor: \n");
    scanf("%d", &idade);

    if (idade < 16){
        printf("Cidad�o INAPTO a votar! \n");
    }else if (idade >= 16 && idade < 18 || idade > 70){
            printf("Cidad�o APTO! Voto � FACULTATIVO! \n");
    }else{
            printf("Cidad�o APTO! Voto � OBRIGAT�RIO! \n");
    }



    system("pause");
return 0;
}
