/* 5. Desenvolva um algoritmo que leia valores inteiros em duas variáveis distintas e faça o
seguinte:
- Se o resto da divisão da primeira variável pela segunda for 1, mostre a soma dessas
variáveis mais o resto da divisão;
- Se o resto desta divisão for 2, escreva se os valores das variáveis são pares ou ímpares;
- Se o resto desta divisão for igual a 3, multiplique a soma dos valores lidos pelo
primeiro valor;
- Se for igual a 4 divida a soma dos números lidos pelo segundo valor, se o segundo
valor for diferente de zero.
- Em qualquer outra situação mostre o quadrado dos números lidos.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    int a, b, resto;

	setlocale(LC_ALL, "Portuguese");

	printf("Digite dois valores inteiros.\n");
	scanf("%d %d", &a, &b);
	resto=a%b;
	if (resto == 1)
		printf("O resultado é %d\n", (a+b+1));
	else
		if (resto == 2) {
			if (a% 2 == 0)
				printf("%d é par.\n", a);
			else
				printf("%d é ímpar.\n", a);
			if (b % 2 == 0)
				printf("%d é par.\n", b);
			else
				printf("%d é ímpar.\n", b);
		}
		else
			if (resto == 3)
				printf("O resultado é %d\n", (a+b)*a);
			else
				if (resto == 4) {
					if (b = 0)
						printf("O resultado é %f\n", ((float)(a+b)/b));
					else
						printf("Divisão impossível.\n");
				}
				else
					printf("O resultado é %d e %d\n", a*a, b*b);




    system("pause");
return 0;
}
