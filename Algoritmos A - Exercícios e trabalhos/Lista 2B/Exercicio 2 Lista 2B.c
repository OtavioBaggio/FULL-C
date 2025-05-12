/* 2. Escreva um algoritmo que leia a altura (em metros), o peso (em quilogramas) e o sexo
(M ou F) de uma pessoa e calcule o peso ideal, dado por:
Peso ideal do homem = (72,7 * altura) – 58
Peso ideal da mulher = (62,1 * altura) – 44, 7.
 O algoritmo deve informar também se a pessoa está abaixo ou acima de seu peso ideal e em
quantos quilos.
*/
#include <stdio.h>
#include <locale.h>

int main(){
    float altura, peso, pesoId;
    char sexo;

    setlocale(LC_ALL, "Portuguese");

    printf("Olá, seja bem vindo a calculadora de peso ideal\n");
    printf("Para começarmos, digite sua altura em metros(m):\n");
    scanf("%f", &altura);
    printf("Seu peso (Kg):\n");
    scanf("%f", &peso);
    printf("Seu sexo (M ou F):\n");
    fflush(stdin);
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm'){
        pesoId = (72.7 * altura) - 58;
    }else if (sexo == 'F' || sexo == 'f'){
            pesoId = (62.1 * altura) - 44.7;
    }else {
            printf("Sexo Inválido, tente novamente somente, com M ou F\n");
    }

    if (peso > pesoId){
        printf("Você está acima do peso ideal, procure um nutricionista mais próximo\n");
        printf("Perca %.2f Kg para ficar no peso ideal\n", peso - pesoId);
    }else if (peso < pesoId){
            printf("Você está abaixo do peso ideal, procure um nutricionista mais próximo\n");
            printf("Ganhe %.2f Kg para ficar no peso ideal\n", pesoId - peso);
    }else {
            printf("Parabéns, você está no seu peso ideal, continue assim!!!\n");
    }

    system("pause");
return 0;
}
