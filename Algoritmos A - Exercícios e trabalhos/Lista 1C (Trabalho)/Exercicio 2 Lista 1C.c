/* 2. Ler um valor inteiro que indica um per�odo de tempo em dias. O programa deve decompor este valor
em dias, meses e anos. Para simplificar, considere que todos os meses tem 30 dias e todos os anos tem
365 dias.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int dias, m, anos, Pdias;

    setlocale(LC_ALL, "Portuguese");

    printf("Ol� usu�rio, informe a quantidade de dias:\n");
    scanf("%i", &Pdias);

    //C�lculos
    anos = Pdias / 360;
    m = (Pdias%360) / 30;
    dias = (Pdias%360) %30;

    //Sa�da
    printf("O periodo corresponde a %i anos, %i meses, %i dias\n", anos, m, dias);
    system("pause");

return 0;
}
