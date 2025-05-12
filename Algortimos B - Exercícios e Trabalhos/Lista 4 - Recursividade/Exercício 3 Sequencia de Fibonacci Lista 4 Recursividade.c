/* 3 � A sequ�ncia [0, 1, 1, 2, 3, 5, 8, 13, 21, 34...] � conhecida como Sequ�ncia ou S�rie de Fibonacci
A S�rie de Fibonacci � definida recursivamente:

    Fib(n) = {                        0,  x = 0
                                      1,  x = 1
                Fib(n - 1) + Fib(n - 2),  n > 1
*/

#include <stdio.h>
#include <locale.h>

int Fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
        else return Fib(n-1) + Fib(n-2);
}

int main(){
setlocale(LC_ALL, "portuguese");
    int x, r;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    if(x > 0){
        r = Fib(x);
        printf("Fibonacci = %d", r);
    }else{
            printf("O n�mero deve ser >= 0");
    }

return 0;
}
