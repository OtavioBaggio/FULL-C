/* 7. Exibir as pot�ncias de um n�mero (base) elevado a um intervalo de expoentes. Por
exemplo, se o usu�rio digitar o n�mero 2 e o intervalo de pot�ncias 2 a 5, o algoritmo
deve exibir o resultado das pot�ncias de 22, 23, 24 e 25. Utilize a fun��o pow.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
setlocale(LC_ALL, "portuguese");
    int num, Inicial, Final, op;
    float Result;

    printf("Informe um n�mero:\n");
    scanf("%d", &num);
    printf("Informe o intervalo das pot�ncias:\n");
    scanf("%d", &Inicial);
    scanf("%d", &Final);

    for (op = Inicial; op != Final; op++){
        Result = pow(num, op);
        printf("As pot�ncias %d^%d = %1.f\n", num, op, Result);
    }





    system("pause");
return 0;
}
