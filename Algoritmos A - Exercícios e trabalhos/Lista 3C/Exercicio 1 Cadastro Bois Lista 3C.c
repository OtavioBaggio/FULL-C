/* 1. Em uma fazenda existem 20 bois. Cada boi tem no seu pescoço um cartão contendo um
número de identificação e seu peso. Escreva um algoritmo que recebe como entrada o
número de identificação e o peso dos 20 bois. O algoritmo deve mostrar:
a. O número e o peso do boi mais gordo
b. O número e o peso do boi mais magro
c. A média de peso dos bois
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int id, i, numG, numM;
    float PesoG = 0, PesoM = 99999, media, peso, pesoTot = 0;

    printf("Bem-vindo manejador, ao controlador de peso de bovinos...\n");
    for (i = 0; i < 20; i++){
        printf("Informe o número do boi %d: ", i + 1);
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

    printf("O boi mais gordo é o de número %d e pesa %.2f KG.\n", numG, PesoG);
    printf("O boi mais magro é o de número %d e pesa %.2f KG.\n", numM, PesoM);
    printf("A média de peso dos bois cadastrados é de: %.2f KG.\n", media);


    system("pause");
return 0;
}
