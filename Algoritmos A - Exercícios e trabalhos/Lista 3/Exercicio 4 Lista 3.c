/* 4. Contar a quantidade de n�meros pares e �mpares digitados por um usu�rio enquanto o
n�mero for diferente de zero.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n, qP = 0, qI = 0;

    printf("Digite um n�mero: \n");
    scanf("%d", &n);

    while (n!= 0){
        if (n%2 == 0)
              qP++;
        else
            qI++;
        printf("Digite um n�mero: \n");
        scanf("%d", &n);
    }

    printf("Foram digitados %d n�meros pares e %d n�meros �mpares \n", qP, qI);


    system("pause");
return 0;
}


