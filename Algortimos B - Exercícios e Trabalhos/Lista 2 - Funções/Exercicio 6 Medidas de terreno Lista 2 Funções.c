/* 6. Desenvolva um programa, com fun��es para calcular a �rea e o per�metro de um terreno
retangular. As medidas do terreno devem ser lidas. Por fim, os valores calculados devem ser
informados ao usu�rio.
*/

#include <stdio.h>
#include <locale.h>

void linha(){
    printf("======================================================\n");
    return;
}

float comprimento, largura;

//Fun��o para calcular a �rea do terreno:
float TerrenoArea(){
    float AreaT;

    AreaT = largura * comprimento;
    return AreaT;
}

//Fun��o para calcular o per�metro do terreno
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

    // Calcula a �rea e o per�metro
    area = TerrenoArea(largura, comprimento);
    perimetro = TerrenoPerimetro(largura, comprimento);

    // Exibe os resultados
    linha();
    linha();
    printf("\nA �rea do terreno �: %.2f metros quadrados\n", area);
    printf("O per�metro do terreno �: %.2f metros\n", perimetro);


return 0;
}
