/* 5. Desenvolva um algoritmo que leia valores inteiros em duas vari�veis distintas e fa�a o
seguinte:
- Se o resto da divis�o da primeira vari�vel pela segunda for 1, mostre a soma dessas
vari�veis mais o resto da divis�o;
- Se o resto desta divis�o for 2, escreva se os valores das vari�veis s�o pares ou �mpares;
- Se o resto desta divis�o for igual a 3, multiplique a soma dos valores lidos pelo
primeiro valor;
- Se for igual a 4 divida a soma dos n�meros lidos pelo segundo valor, se o segundo
valor for diferente de zero.
- Em qualquer outra situa��o mostre o quadrado dos n�meros lidos.
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
		printf("O resultado � %d\n", (a+b+1));
	else
		if (resto == 2) {
			if (a% 2 == 0)
				printf("%d � par.\n", a);
			else
				printf("%d � �mpar.\n", a);
			if (b % 2 == 0)
				printf("%d � par.\n", b);
			else
				printf("%d � �mpar.\n", b);
		}
		else
			if (resto == 3)
				printf("O resultado � %d\n", (a+b)*a);
			else
				if (resto == 4) {
					if (b = 0)
						printf("O resultado � %f\n", ((float)(a+b)/b));
					else
						printf("Divis�o imposs�vel.\n");
				}
				else
					printf("O resultado � %d e %d\n", a*a, b*b);




    system("pause");
return 0;
}
