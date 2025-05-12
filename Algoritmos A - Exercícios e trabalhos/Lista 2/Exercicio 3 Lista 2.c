/* 3. Escreva um algoritmo para ler a quantidade de horas aula trabalhadas por dois professores e o
valor por hora recebido por cada um deles. Mostrar na tela qual dos professores tem o maior
salário total.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float HrsProf1, HrsProf2, Salario1, Salario2;
    float ValorH;;

    setlocale(LC_ALL, "Portuguese");

    printf("Eai usuário, irei calcular para você o salário de ambos professores e lhe mostrar quem ganha o maior salário\n");
    printf("Informe as horas trabalhadas, por dia, pelo professor 1:\n");
    scanf("%f", &HrsProf1);
    printf("As horas trabalhadas do professor 2:\n");
    scanf("%f", &HrsProf2);
    printf("Por fim, informe o valor da hora trabalhada:\nR$");
    scanf("%f", &ValorH);

    //Cálculos
    Salario1 = (HrsProf1 * 5) * ValorH;
    Salario2 = (HrsProf2 * 5) * ValorH;

    if (Salario1 > Salario2)
        printf("O Professor 1, recebendo R$%.1f, virou o elon musk\n", Salario1);
    else {
        (Salario2 > Salario1);
        printf("O professor 2, recebendo R$%.1f, virou o tio patinhas\n");
    }

    system("pause");
return 0;
}
