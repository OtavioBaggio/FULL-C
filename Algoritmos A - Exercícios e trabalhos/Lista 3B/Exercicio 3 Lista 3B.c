/* 3. Fa�a um algoritmo para ler dois n�meros inteiros. Calcular e mostrar o valor resultante se
elevarmos a base representada pelo primeiro � pot�ncia representada pelo segundo.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num1, num2, potencia;

    printf("Digite dois valores: \n");
    scanf("%d %d", &num1, &num2);

    potencia = pow(num1, num2);

    printf("O resultado de %d elevado a %d �: %d\n", num1, num2, potencia);


    system ("pause");
return 0;
}
