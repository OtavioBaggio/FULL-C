/* 8. Ler o sal�rio de 10 funcion�rios e calcular a m�dia de sal�rios.
*/
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
    float Salario, SalarioTot, Media;
    int op;

    for (op = 1; op != 11; op++){
        printf("Informe o %d sal�rio:\n", op);
        scanf("%f", &Salario);
        SalarioTot = Salario + SalarioTot;
    }
    Media = SalarioTot / 10;

    printf("A m�dia salarial dos Dez funcion�rios � de: R$ %1.f\n", Media);


    system("pause");
return 0;
}
