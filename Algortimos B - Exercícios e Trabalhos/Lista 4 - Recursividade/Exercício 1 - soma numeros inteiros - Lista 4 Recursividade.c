/* 1 – Soma dos n primeiros números inteiros maiores que zero.
*/

#include <stdio.h>
#include <locale.h>

int SomaInteiros(int n){
    if(n == 0){
        return 0;
    }
    return n + SomaInteiros(n - 1);
}

int main(){
setlocale(LC_ALL, "portuguese");
    int n;
    int resultado;

    printf("Informe um número inteiro positivo: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Informe um número inteiro maior que ZERO!");
    }else{
        resultado = SomaInteiros(n);
        printf("A soma dos %d primeiros números inteiros maiores que zero é: %d\n", n, resultado);
    }

return 0;
}
