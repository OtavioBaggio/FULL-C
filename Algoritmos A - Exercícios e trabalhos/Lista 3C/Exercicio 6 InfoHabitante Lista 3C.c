/* 6. Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes
dados: sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo para ler as
informações coletadas e mostre as seguintes informações:
a) Média de idade dos habitantes.
b) Média de altura das mulheres.
c) Média de altura dos homens.
d) Maior idade dos habitantes.
e) Maior altura dos habitantes.
f) Percentual de pessoas com idade entre 18 e 35 anos (inclusive).
*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int sexo, idade, TotalHabit = 1000, ContadorMulher = 0, ContadorHomen = 0, i;
    float altura, SomaIdade = 0, SomaAlturaMulher = 0, SomaAlturaHomen = 0;
    int MaiorIdade = 0;
    float MaiorAltura = 0;
    int ContadorIdade_18_35 = 0;
    float MediaIdade, MediaAlturaH, MediaAlturaM, Percentual_18_35;

    printf("Pesquisa do IBGE, informe a seguir os dados referentes aos 1000 habitantes da região:\n");

    for (i = 0; i < TotalHabit; i++){
        printf("\n\nInforme o sexo do habitante (0 para Feminino, 1 para Masculino): ");
        scanf("%d", &sexo);
        printf("Agora, a sua idade: ");
        scanf("%d", &idade);
        printf("Por fim, sua altura: ");
        scanf("%f", &altura);

        SomaIdade += idade;

        if (sexo == 0){
            SomaAlturaMulher += altura;
            ContadorMulher++;
        }else{
                SomaAlturaHomen += altura;
                ContadorHomen++;
        }

        if (idade > MaiorIdade){
            MaiorIdade = idade;
        }

        if (altura > MaiorAltura){
            MaiorAltura = altura;
        }

        if (idade >= 18 && idade <= 35){
            ContadorIdade_18_35++;
        }

    }

    //Cálculos das médias:
    MediaIdade = SomaIdade / TotalHabit;

    MediaAlturaH = SomaAlturaHomen / ContadorHomen;

    MediaAlturaM = SomaAlturaMulher / ContadorMulher;

    Percentual_18_35 = (float)ContadorIdade_18_35 / TotalHabit * 100;


    printf("\nMédia de idade dos habitantes: %.2f\n", MediaIdade);
    printf("Média de altura das mulheres: %.2f\n", MediaAlturaM);
    printf("Média de altura dos homens: %.2f\n", MediaAlturaH);
    printf("Maior idade dos habitantes: %d\n", MaiorIdade);
    printf("Maior altura dos habitantes: %.2f\n", MaiorAltura);
    printf("Percentual de pessoas com idade entre 18 e 35 anos: %.2f%%\n", Percentual_18_35);


    system("pause");
return 0;
}
