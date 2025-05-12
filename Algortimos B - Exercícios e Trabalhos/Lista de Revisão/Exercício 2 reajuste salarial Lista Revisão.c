/* 2 � Escreva um algoritmo para calcular o reajuste salarial de uma empresa que possui 10 funcion�rios, de
acordo com os seguintes crit�rios:
-> os funcion�rios com sal�rio inferior a 10.000 devem receber 20% de reajuste
-> os funcion�rios com sal�rio entre 10.000 e 25.000 devem receber 6% de reajuste.
-> os funcion�rios com sal�rio acima de 25.000 devem receber 3% de reajuste.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");  //Localizando o c�digo para portugu�s brasileiro
    //Vari�veis
    float salario[10];      //Sal�rio do funcion�rio
    float salReajust[10];   //Sal�rio Reajustado
    int i;                  //Operador para as estruturas a ser utilizadas no c�digo

    //Aplicando o la�o de repeti��o para registrar os sal�rios dos funcion�rios
    for(i = 0; i < 10; i++){
        printf("Digite o sal�rio do funcion�rio %d: R$ ", i + 1);
        scanf("%f", &salario[i]);
    }

    //La�o para reajustar os sal�rio
    for(i = 0; i < 10; i++){
        if(salario[i] < 10000){
            salReajust[i] = salario[i] * 1.20;         //Reajuste de 20%
        }else if(salario[i] < 25000){
                salReajust[i] = salario[i] * 1.06;     //Reajuste de 6%
        }else{
                salReajust[i] = salario[i] * 1.03;     //Reajuste de 3%
        }
    }

    //Imprimindo os resultados
    printf("\t\nSal�rios ajustados:\n");
    for(i = 0; i < 10; i++){   //Utilizando o la�o para mostrar o sal�rio dos funcion�rios
        printf("Funcion�rio %d:\n", i + 1);
        printf("Sal�rio atual: R$ %.1f\n", salario[i]);
        printf("Sal�rio ajustado: R$ %.1f\n\n", salReajust[i]);
    }


return 0;
}
