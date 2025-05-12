/* 5. Considere a tabela de Alíquota de Imposto de Renda (IR) a seguir. Desenvolva um
algoritmo para ler um valor de salário mensal, mostrar o % da alíquota do imposto de Renda e o
valor em R$ da alíquota.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float salario;
    float IReais, IRperc;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o salário mensal (R$):\n");
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
    printf("O salário de %.2f terá uma alíquota aplicada de %.2f, totalizando: R$ %.2f a pagar de imposto de renda\n", salario, IRperc, IReais);


    system("pause");
return 0;
}
