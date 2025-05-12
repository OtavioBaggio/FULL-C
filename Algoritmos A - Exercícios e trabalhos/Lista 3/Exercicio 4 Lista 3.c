/* 4. Contar a quantidade de números pares e ímpares digitados por um usuário enquanto o
número for diferente de zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n, qP = 0, qI = 0;

    printf("Digite um número: \n");
    scanf("%d", &n);

    while (n!= 0){
        if (n%2 == 0)
              qP++;
        else
            qI++;
        printf("Digite um número: \n");
        scanf("%d", &n);
    }

    printf("Foram digitados %d números pares e %d números ímpares \n", qP, qI);


    system("pause");
return 0;
}


