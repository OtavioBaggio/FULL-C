/* 4. Escreva um algoritmo para ler dois valores e uma das seguintes opera��es a serem executadas
(codificadas da seguinte forma: 1 � Adi��o, 2 � Subtra��o, 3 � Multiplica��o e 4 � Divis�o).
Calcular e escrever o resultado dessa opera��o sobre os dois valores lidos.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float V1, V2, resultado;
    int opcao;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe dois valores:\n");
    scanf("%f%f", &V1, &V2);
    printf("Escolha a op��o:\n");
    printf("1 - Adi��o\n");
    printf("2 - Subtra��o\n");
    printf("3 - Multiplica��o\n");
    printf("4 - Divis�o\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("***SOMA***\n");
        resultado = V1 + V2;
        printf("%f + %f = %f", V1, V2, resultado);
    }else {
        if (opcao == 2){
            printf("***SUBTRA��O***\n");
            resultado = V1 - V2;
            printf("%f - %f = %f\n", V1, V2, resultado);
        }else{
            if (opcao == 3){
                printf("***MULTIPLICA��O***\n");
                resultado = V1 * V2;
                printf("%f * %f = %f\n", V1, V2, resultado);
            }else {
                if (opcao == 4){
                    printf("***DIVIS�O***\n");
                    if (V2 == 0){
                        printf("DIVIS�O POR ZERO\n");
                    }else{
                        resultado = V1/V2;
                        printf("%.1f / %.1f = %.1f\n", V1, V2, resultado);
                    }
                }else printf("OP��O INV�LIDA!!!\n");
            }
        }
    }
    system("pause");
    return 0;
}
