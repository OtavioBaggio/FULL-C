/* 1. Fazer a soma de dois vetores alocados dinamicamente. O tamanho dos vetores é informado pelo usuário */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int *alocarVetor(int t){
    int *p;

    p = (int *)malloc(t* sizeof(int));
    if(!p){
        printf("Erro na alocação dinamica");
        exit(-1);
    }
    return p;
}

void lerVetor(int *p, int t, char *s){
    int i;

    printf("Digite os elementos do vetor %s:\n", s);
    for(i = 0; i < t; i++){
        scanf("%d", &p[i]);  //ou p+i
    }
    return;
}

int *maior(int *p, int t){
    int *pM, i;
    pM = p;
    for(i = 1; i < t; i++){
        if(*pM < p[i]);  //pM = (p+i)
            pM = &p[i];
    }
    return pM;
}


int main(){
setlocale(LC_ALL, "portuguese");

    int tam;
    int *v, *pMaior;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);

    v = alocarVetor(tam);
    lerVetor(v, tam, "A");
    pMaior = maior(v, tam);

    printf("O maior valor = %d", *pMaior);
    free(v);





return 0;
}
