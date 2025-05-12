/* 1 � Escrever um algoritmo para ler o c�digo de um vendedor de uma empresa, seu sal�rio fixo e o total de
vendas efetuadas por ele. Cada vendedor recebe um sal�rio fixo, mais uma comiss�o proporcional �s vendas
efetuadas por ele. A comiss�o � de 3% sobre o total de vendas at� R$1.000,00; 5% de R$1.000,00 � R$2.000,00
e 10% para vendas acima de R$2.000,00. Escrever o c�digo do vendedor, o total de suas vendas, seu sal�rio
fixo e seu sal�rio total
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    //Vari�veis
    int cod;        //C�digo do vendedor
    float salF;     //Sal�rio Fixo do vendedor
    float vendTot;  //Vendas Totais realizadas pelo vendedor
    float comis;    //Comiss�o
    float salTot;   //Sal�rio Total desse pracista com todas as informa��es aplicadas

    //Lendo e imprimindo os principais dados referente ao vendedor
    printf("\tBem-vindo ao Financial Registers... Insira a seguir os dados referentes ao vendedor de sua empresa\n");
    printf("\nC�digo do vendedor: ");
    scanf("%d", &cod);
    printf("\nSal�rio fixo do vendedor: ");
    scanf("%f", &salF);
    printf("\nQuantas vendas o pracista realizou esse m�s (em R$): ");
    scanf("%f", &vendTot);

    //Aplicando as condi��es referente � ordem de servi�o do cliente
    if(vendTot <= 1000){
        comis = vendTot * 0.03;
    }else if(vendTot <= 2000){
            comis = 1000 * 0.03 + (vendTot - 1000) * 0.05;
    }else{
            comis = 1000 * 0.03 + 1000 * 0.05 + (vendTot - 2000) * 0.10;
    }

    //Calculando o sal�rio total desse vendedor
    salTot = salF + comis;

    //Mostrando os resultados, com as informa��es informadas e processadas:
    printf("\n\nC�digo do vendedor: %d", cod);
    printf("\nVendas realizadas (em R$): %.1f", vendTot);
    printf("\nSal�rio fixo: %.1f", salF);
    printf("\nSal�rio Total do vendedor: %.1f", salTot);


return 0;
}
