/* 9. Fa�a um algoritmo para calcular o resultado de um valor A elevado a um expoente B. Os
valores A e B devem ser lidos. N�o utilize a fun��o pow.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int A, B;
    long long result = 1;

    printf("Insira um valor de A e para B, para saber quanto ser� o valor de A elevado pelo expoente de B:\n");
    scanf("%d%d", &A, &B);

    if (B >= 0){
        for (int i = 0; i < B; i++){
            result *= A;
        }
    }else{
        for (int i = 0; i > B; i--){
            result /= A;
        }
    }
    printf("%d elevado ao expoente %d � igual a: %1d\n", A, B, result);


    system("pause");
return 0;
}
