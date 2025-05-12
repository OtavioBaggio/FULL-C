/* 7. Exibir as potências de um número (base) elevado a um intervalo de expoentes. Por
exemplo, se o usuário digitar o número 2 e o intervalo de potências 2 a 5, o algoritmo
deve exibir o resultado das potências de 22, 23, 24 e 25. Utilize a função pow.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL, "portuguese");
    int num, Inicial, Final, op;
    float Result;

    printf("Informe um número:\n");
    scanf("%d", &num);
    printf("Informe o intervalo das potências:\n");
    scanf("%d", &Inicial);
    scanf("%d", &Final);

    for (op = Inicial; op != Final; op++){
        Result = pow(num, op);
        printf("As potências %d^%d = %1.f\n", num, op, Result);
    }





    system("pause");
return 0;
}
