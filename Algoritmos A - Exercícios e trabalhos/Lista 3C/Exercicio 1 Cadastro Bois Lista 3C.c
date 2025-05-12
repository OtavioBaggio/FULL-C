/* 1. Em uma fazenda existem 20 bois. Cada boi tem no seu pesco�o um cart�o contendo um
n�mero de identifica��o e seu peso. Escreva um algoritmo que recebe como entrada o
n�mero de identifica��o e o peso dos 20 bois. O algoritmo deve mostrar:
a. O n�mero e o peso do boi mais gordo
b. O n�mero e o peso do boi mais magro
c. A m�dia de peso dos bois
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int id, i, numG, numM;
    float PesoG = 0, PesoM = 99999, media, peso, pesoTot = 0;

    printf("Bem-vindo manejador, ao controlador de peso de bovinos...\n");
    for (i = 0; i < 20; i++){
        printf("Informe o n�mero do boi %d: ", i + 1);
        scanf("%d", &id);
        printf("O peso desse boi %d(KG): ", i + 1);
        scanf("%f", &peso);

        if (peso > PesoG){
            PesoG = peso;
            numG = id;
        }
        if (peso < PesoM){
            PesoM = peso;
            numM = id;
        }
        pesoTot += peso;

    }
    printf("\n");

    media = pesoTot / 20;

    printf("O boi mais gordo � o de n�mero %d e pesa %.2f KG.\n", numG, PesoG);
    printf("O boi mais magro � o de n�mero %d e pesa %.2f KG.\n", numM, PesoM);
    printf("A m�dia de peso dos bois cadastrados � de: %.2f KG.\n", media);


    system("pause");
return 0;
}
