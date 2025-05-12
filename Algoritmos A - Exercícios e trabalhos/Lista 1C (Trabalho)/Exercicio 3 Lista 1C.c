/* 3. Uma fam�lia deseja informatizar suas despesas dom�sticas, pois seu filho est� cursando Ci�ncia da
Computa��o. Para o c�lculo, as despesas da fam�lia s�o: �gua, luz, telefone, condom�nio, mensalidade,
sa�de, alimenta��o, vestu�rio, transporte e seguran�a. As receitas s�o o sal�rio do pai e o sal�rio da
m�e. Desenvolva um algoritmo para ler as receitas e despesas, calcular a renda total da fam�lia, calcular
o total de despesas e o saldo final
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float agua, transp, segur, luz, telef, condom, mensal, saude, alimen, vestuario;
    float salMae, salPai, RendaT, DespesaT, SaldoF;

    setlocale(LC_ALL, "Portuguese");

    //Entrada
    printf("Ol� usu�rio, bem vindo � calculadora de despesas familiar mensal:\n");
    printf("Por favor, informe os dados a seguir referente as despesas:\n");
    printf("�gua:\nR$");
    scanf("%f", &agua);
    printf("Eletrecidade(luz):\nR$");
    scanf("%f", &luz);
    printf("Telefone/Internet:\nR$");
    scanf("%f", &telef);
    printf("Condom�nio:\nR$");
    scanf("%f", &condom);
    printf("Mensalidade da faculdade:\nR$");
    scanf("%f", &mensal);
    printf("Sa�de:\nR$");
    scanf("%f", &saude);
    printf("Alimenta��o:\nR$");
    scanf("%f", &alimen);
    printf("Vestimentas:\nR$");
    scanf("%f", &vestuario);
    printf("Transporte:\nR$");
    scanf("%f", &transp);
    printf("Seguran�a:\nR$");
    scanf("%f", &segur);
    printf("Por fim, informe os respectivos sal�rios:\n");
    printf("Sal�rio do Pai:\nR$");
    scanf("%f", &salPai);
    printf("Sal�rio da M�e:\nR$");
    scanf("%f", &salMae);

    //C�lculos
    DespesaT = agua + luz + telef + condom + mensal + saude + alimen + vestuario + transp + segur;
    RendaT = (salMae + salPai) / 3;
    SaldoF = RendaT - DespesaT;

    //Sa�da
    printf("A Renda Familiar �: R$%.1f\n", RendaT);
    printf("O valor total com as despesas ser� de: R$%.1f\n", DespesaT);
    printf("O Saldo Final em caixa ser� de: R$%.1f\n", SaldoF);
    system("pause");

return 0;
}
