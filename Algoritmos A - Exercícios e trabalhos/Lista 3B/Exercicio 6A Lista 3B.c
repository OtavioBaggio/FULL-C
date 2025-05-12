/* 6. Calcule o valor de y na seguinte função: y = 4x + 3.
      a) Faça a primeira versão com o x variando de -7 até 15.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    float y;
    int x, i;

    for (i = -7; i < 16; i++){
        x = i;
        y = (4 * x) + 3;
        printf("y = 4x + 3: %.1f\n", y);
    }






    system("pause");
return 0;
}
