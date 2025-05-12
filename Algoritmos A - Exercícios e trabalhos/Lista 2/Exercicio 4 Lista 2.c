/* 4. Escreva um algoritmo para ler dois valores e uma das seguintes operações a serem executadas
(codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 – Divisão).
Calcular e escrever o resultado dessa operação sobre os dois valores lidos.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float V1, V2, resultado;
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe dois valores:\n");
    scanf("%f%f", &V1, &V2);
    printf("Escolha a opção:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("***SOMA***\n");
        resultado = V1 + V2;
        printf("%f + %f = %f", V1, V2, resultado);
    }else {
        if (opcao == 2){
            printf("***SUBTRAÇÃO***\n");
            resultado = V1 - V2;
            printf("%f - %f = %f\n", V1, V2, resultado);
        }else{
            if (opcao == 3){
                printf("***MULTIPLICAÇÃO***\n");
                resultado = V1 * V2;
                printf("%f * %f = %f\n", V1, V2, resultado);
            }else {
                if (opcao == 4){
                    printf("***DIVISÃO***\n");
                    if (V2 == 0){
                        printf("DIVISÃO POR ZERO\n");
                    }else{
                        resultado = V1/V2;
                        printf("%.1f / %.1f = %.1f\n", V1, V2, resultado);
                    }
                }else printf("OPÇÃO INVÁLIDA!!!\n");
            }
        }
    }
    system("pause");
    return 0;
}
