/* 6. Desenvolva um programa, com funções para calcular a área e o perímetro de um terreno
retangular. As medidas do terreno devem ser lidas. Por fim, os valores calculados devem ser
informados ao usuário.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

float comprimento, largura;

//Função para calcular a área do terreno:
float TerrenoArea(){
    float AreaT;

    AreaT = largura * comprimento;
    return AreaT;
}

//Função para calcular o perímetro do terreno
float TerrenoPerimetro(){
    float PerimetroT;

    PerimetroT = 2 * (largura * comprimento);
    return PerimetroT;
}

int main(){
setlocale(LC_ALL, "portuguese");
    float area, perimetro;

    // Leitura da largura do terreno
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    // Leitura do comprimento do terreno
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    // Calcula a área e o perímetro
    area = TerrenoArea(largura, comprimento);
    perimetro = TerrenoPerimetro(largura, comprimento);

    // Exibe os resultados
    linha();
    linha();
    printf("\nA área do terreno é: %.2f metros quadrados\n", area);
    printf("O perímetro do terreno é: %.2f metros\n", perimetro);


return 0;
}
