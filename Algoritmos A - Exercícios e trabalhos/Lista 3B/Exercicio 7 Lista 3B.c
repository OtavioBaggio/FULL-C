/* 7. Desenvolva um algoritmo que leia n n�meros e mostre o maior e o menor n�mero lido.
*/

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num, x = -99999, y = 99999, i;

    printf("Digite 6 n�meros para ver qual � o maior e o menor n�mero:\n");

    for (i = 1; i < 7; i++){
        scanf("%d", &num);
        if (num > x){
            x = num;
        }
        if (num < y){
            y = num;
        }
    }
    printf("Maior n�mero digitado �: %d\n", x);
    printf("Menor n�mero digitado �: %d\n", y);



    system("pause");
return 0;
}
