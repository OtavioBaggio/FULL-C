/* 4. Considere a cota��o do dia do D�lar Americano em rela��o ao Real Brasileiro:
US$ 1,00 = R$ 4,98
Desenvolva um algoritmo que leia um valor em Reais, informado pelo usu�rio, calcule e mostre o valor
equivalente em D�lares, conforme a cota��o informada na quest�o.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float Dolar;
    float Real;

    setlocale(LC_ALL, "Portuguese");

    //Dados
    printf("Bem vindo, usu�rio, ao conversor de moeda brasileira(Real) para moeda americana(D�lar)\n");
    printf("Por favor, informe o valor que deseja converter:\nR$");
    scanf("%f", &Real);

    //C�lculos
    Dolar = Real / 4.98;

    //Sa�da
    printf("Este valor em d�lar � igual a: US$ %.3f\n", Dolar);
    system("pause");

return 0;
}
