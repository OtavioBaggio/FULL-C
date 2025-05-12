/* 4. Desenvolva um algoritmo para ler o c�digo, o sal�rio l�quido e o n�mero de filhos dos
funcion�rios de uma empresa. Para cada funcion�rio, o algoritmo deve escrever seu
c�digo e sal�rio l�quido acrescido de um adicional de 5% para cada filho. O algoritmo
para de ler os dados quando o c�digo fornecido for zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int codigo, filhos;
    float SalaLiq, SalaAcr;

    printf("Bem-vindo ao programa de benef�cio paternal, por favor, a seguir infomre os dados referente ao funcion�rio:\n");

    do{
        printf("\nInfome o c�digo do funcion�rio (ou digite 0 para SAIR): ");
        scanf("%d", &codigo);

        if (codigo == 0)
            break;

        printf("Informe o Sal�rio L�quido deste funcion�rio: ");
        scanf("%f", &SalaLiq);
        printf("Informe a quantidade de filhos do funcion�rio: ");
        scanf("%d", &filhos);

        //C�lculo do benef�cio
        SalaAcr = SalaLiq + (SalaLiq * 0.05 * filhos);

        printf("\nFuncion�rio de c�digo %d -- Sal�rio com o benef�cio: %.2f\n", codigo, SalaAcr);

    }while (codigo != 0);


    system("pause");
return 0;
}
