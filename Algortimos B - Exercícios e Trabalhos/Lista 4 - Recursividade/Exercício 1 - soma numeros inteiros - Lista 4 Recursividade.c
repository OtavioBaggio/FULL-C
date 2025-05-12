/* 1 � Soma dos n primeiros n�meros inteiros maiores que zero.
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

    printf("Informe um n�mero inteiro positivo: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Informe um n�mero inteiro maior que ZERO!");
    }else{
        resultado = SomaInteiros(n);
        printf("A soma dos %d primeiros n�meros inteiros maiores que zero �: %d\n", n, resultado);
    }

return 0;
}
