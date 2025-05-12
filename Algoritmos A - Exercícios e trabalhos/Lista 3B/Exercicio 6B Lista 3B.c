/* 6. Calcule o valor de y na seguinte função: y = 4x + 3.
      a. Faça a primeira versão com o x variando de -7 até 15.
      b. Construa uma outra versão deste algoritmo, onde o intervalo de variação do x é
      informado pelo usuário.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float y, x1, x2, x;
    int i;

    printf("Olá usuário, iremos calcular a função y = 4x + 3\n");
    printf("Para isso, determine um intervalo para 'x':\n");
    scanf("%f%f", &x1, &x2);

    i = x1;
    do{
        x = i;
        y = (4 * x) + 3;
        printf("y = 4x + 3 = %.1f\n", y);
        i++;
    }while (i <= x2);








    system("pause");
return 0;
}
