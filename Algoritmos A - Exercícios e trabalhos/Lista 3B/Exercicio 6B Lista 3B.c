/* 6. Calcule o valor de y na seguinte fun��o: y = 4x + 3.
      a. Fa�a a primeira vers�o com o x variando de -7 at� 15.
      b. Construa uma outra vers�o deste algoritmo, onde o intervalo de varia��o do x �
      informado pelo usu�rio.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float y, x1, x2, x;
    int i;

    printf("Ol� usu�rio, iremos calcular a fun��o y = 4x + 3\n");
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
