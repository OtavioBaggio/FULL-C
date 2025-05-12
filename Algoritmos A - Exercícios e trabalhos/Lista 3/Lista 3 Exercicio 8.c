/* 8. Ler o salário de 10 funcionários e calcular a média de salários.
*/
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
    float Salario, SalarioTot, Media;
    int op;

    for (op = 1; op != 11; op++){
        printf("Informe o %d salário:\n", op);
        scanf("%f", &Salario);
        SalarioTot = Salario + SalarioTot;
    }
    Media = SalarioTot / 10;

    printf("A média salarial dos Dez funcionários é de: R$ %1.f\n", Media);


    system("pause");
return 0;
}
