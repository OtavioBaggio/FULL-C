/* 1. Escrever um algoritmo que efetue as operações de uma calculadora com 4 operações. O
algoritmo lê o primeiro operando, a operação ( ‘+’, ‘-’, ‘*’ e ‘/’) e o operando. O algoritmo deve
escrever na tela:
1º operando operação 2º operando = resultado
Por exemplo, se forem lidos os valores 2 * 5, o algoritmo deverá escrever:
2*5 = 10
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float Num1, Num2, Tot;
    char operador;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe dois valores:\n");
    scanf("%f%f", &Num1, &Num2);
    printf("Informe uma operação:\n");
    fflush(stdin);
    scanf("%c", &operador);

    if (operador == '+'){
        Tot = Num1 + Num2;
        printf("Soma: %.2f", Tot);
    }else if (operador == '-'){
            Tot = Num1 - Num2;
            printf("Subtração: %.2f", Tot);
    }else if (operador == '*'){
            Tot = Num1 * Num2;
            printf("Multiplicação: %.2f", Tot);
    }else if (operador == '/'){
            Tot = Num1 / Num2;
            printf("Divisão: %.2f", Tot);
    }else{
            printf("Operação Inválida\n");
    }

    system("pause");

return 0;
}
