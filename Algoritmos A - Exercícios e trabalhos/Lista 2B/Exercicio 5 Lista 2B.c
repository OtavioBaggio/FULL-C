/* 5. Considere a tabela de Al�quota de Imposto de Renda (IR) a seguir. Desenvolva um
algoritmo para ler um valor de sal�rio mensal, mostrar o % da al�quota do imposto de Renda e o
valor em R$ da al�quota.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float salario;
    float IReais, IRperc;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o sal�rio mensal (R$):\n");
    scanf("%f", &salario);

    if (salario <= 1566.61){
        IReais = 0;
        IRperc = 0;
    }else if (salario <= 2437.85){
            IReais = salario * 0.075;
            IRperc = 7.5;
    }else if (salario <= 3130.51){
            IReais = salario * 0.15;
            IRperc = 15;
    }else if (salario <= 3911.63){
            IReais = salario * 0.225;
            IRperc = 225;
    }else{
            IReais = salario * 0.275;
            IRperc = 275;
    }
    printf("O sal�rio de %.2f ter� uma al�quota aplicada de %.2f, totalizando: R$ %.2f a pagar de imposto de renda\n", salario, IRperc, IReais);


    system("pause");
return 0;
}
