/* 7. Desenvolva um algoritmo que leia n números e mostre o maior e o menor número lido.
*/

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int num, x = -99999, y = 99999, i;

    printf("Digite 6 números para ver qual é o maior e o menor número:\n");

    for (i = 1; i < 7; i++){
        scanf("%d", &num);
        if (num > x){
            x = num;
        }
        if (num < y){
            y = num;
        }
    }
    printf("Maior número digitado é: %d\n", x);
    printf("Menor número digitado é: %d\n", y);



    system("pause");
return 0;
}
