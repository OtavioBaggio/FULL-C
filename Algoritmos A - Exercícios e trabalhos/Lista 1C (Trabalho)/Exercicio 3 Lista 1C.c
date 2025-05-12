/* 3. Uma família deseja informatizar suas despesas domésticas, pois seu filho está cursando Ciência da
Computação. Para o cálculo, as despesas da família são: água, luz, telefone, condomínio, mensalidade,
saúde, alimentação, vestuário, transporte e segurança. As receitas são o salário do pai e o salário da
mãe. Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total da família, calcular
o total de despesas e o saldo final
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float agua, transp, segur, luz, telef, condom, mensal, saude, alimen, vestuario;
    float salMae, salPai, RendaT, DespesaT, SaldoF;

    setlocale(LC_ALL, "Portuguese");

    //Entrada
    printf("Olá usuário, bem vindo à calculadora de despesas familiar mensal:\n");
    printf("Por favor, informe os dados a seguir referente as despesas:\n");
    printf("Água:\nR$");
    scanf("%f", &agua);
    printf("Eletrecidade(luz):\nR$");
    scanf("%f", &luz);
    printf("Telefone/Internet:\nR$");
    scanf("%f", &telef);
    printf("Condomínio:\nR$");
    scanf("%f", &condom);
    printf("Mensalidade da faculdade:\nR$");
    scanf("%f", &mensal);
    printf("Saúde:\nR$");
    scanf("%f", &saude);
    printf("Alimentação:\nR$");
    scanf("%f", &alimen);
    printf("Vestimentas:\nR$");
    scanf("%f", &vestuario);
    printf("Transporte:\nR$");
    scanf("%f", &transp);
    printf("Segurança:\nR$");
    scanf("%f", &segur);
    printf("Por fim, informe os respectivos salários:\n");
    printf("Salário do Pai:\nR$");
    scanf("%f", &salPai);
    printf("Salário da Mãe:\nR$");
    scanf("%f", &salMae);

    //Cálculos
    DespesaT = agua + luz + telef + condom + mensal + saude + alimen + vestuario + transp + segur;
    RendaT = (salMae + salPai) / 3;
    SaldoF = RendaT - DespesaT;

    //Saída
    printf("A Renda Familiar é: R$%.1f\n", RendaT);
    printf("O valor total com as despesas será de: R$%.1f\n", DespesaT);
    printf("O Saldo Final em caixa será de: R$%.1f\n", SaldoF);
    system("pause");

return 0;
}
