/* 2. No 1º turno de eleição para Presidente da República, há 10 candidatos. Escreva um
algoritmo para ler o número da legenda do candidato e a quantidade de votos recebidos. O
algoritmo deve mostrar o candidato com maior número de votos e o percentual recebido
por este candidato sobre a quantidade total de votos.
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int i, leg, legG = 1, votos, votosTot = 0, votoG = 0;
    float PercentVotos;

    printf("RESULTADO DAS ELEIÇÕES PRESIDENCIAIS 2024:\n");

    for (i = 0; i < 10; i++){
        printf("Informe o número da legenda do candidato %d: ", i + 1);
        scanf("%d", &leg);
        printf("Quantidade de votos que o candidato %d recebeu: ", i + 1);
        scanf("%d", &votos);

        if (votos > votoG){
            votoG = votos;
            legG = leg;
        }
        votosTot += votos;
    }
    PercentVotos = (float)votoG / votosTot * 100;

    printf("\nO candidato da legenda %d foi o candidato mais votado no primeiro turno com %d votos válidos.\n", legG, votoG);
    printf("Ele recebeu %.2f%% dos votos totais...\n", PercentVotos);



    system("pause");
return 0;
}
