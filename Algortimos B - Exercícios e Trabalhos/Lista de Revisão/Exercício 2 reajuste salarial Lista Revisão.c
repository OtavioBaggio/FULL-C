/* 2 – Escreva um algoritmo para calcular o reajuste salarial de uma empresa que possui 10 funcionários, de
acordo com os seguintes critérios:
-> os funcionários com salário inferior a 10.000 devem receber 20% de reajuste
-> os funcionários com salário entre 10.000 e 25.000 devem receber 6% de reajuste.
-> os funcionários com salário acima de 25.000 devem receber 3% de reajuste.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");  //Localizando o código para português brasileiro
    //Variáveis
    float salario[10];      //Salário do funcionário
    float salReajust[10];   //Salário Reajustado
    int i;                  //Operador para as estruturas a ser utilizadas no código

    //Aplicando o laço de repetição para registrar os salários dos funcionários
    for(i = 0; i < 10; i++){
        printf("Digite o salário do funcionário %d: R$ ", i + 1);
        scanf("%f", &salario[i]);
    }

    //Laço para reajustar os salário
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
    printf("\t\nSalários ajustados:\n");
    for(i = 0; i < 10; i++){   //Utilizando o laço para mostrar o salário dos funcionários
        printf("Funcionário %d:\n", i + 1);
        printf("Salário atual: R$ %.1f\n", salario[i]);
        printf("Salário ajustado: R$ %.1f\n\n", salReajust[i]);
    }


return 0;
}
