/* 4. Desenvolva um algoritmo para ler o código, o salário líquido e o número de filhos dos
funcionários de uma empresa. Para cada funcionário, o algoritmo deve escrever seu
código e salário líquido acrescido de um adicional de 5% para cada filho. O algoritmo
para de ler os dados quando o código fornecido for zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int codigo, filhos;
    float SalaLiq, SalaAcr;

    printf("Bem-vindo ao programa de benefício paternal, por favor, a seguir infomre os dados referente ao funcionário:\n");

    do{
        printf("\nInfome o código do funcionário (ou digite 0 para SAIR): ");
        scanf("%d", &codigo);

        if (codigo == 0)
            break;

        printf("Informe o Salário Líquido deste funcionário: ");
        scanf("%f", &SalaLiq);
        printf("Informe a quantidade de filhos do funcionário: ");
        scanf("%d", &filhos);

        //Cálculo do benefício
        SalaAcr = SalaLiq + (SalaLiq * 0.05 * filhos);

        printf("\nFuncionário de código %d -- Salário com o benefício: %.2f\n", codigo, SalaAcr);

    }while (codigo != 0);


    system("pause");
return 0;
}
