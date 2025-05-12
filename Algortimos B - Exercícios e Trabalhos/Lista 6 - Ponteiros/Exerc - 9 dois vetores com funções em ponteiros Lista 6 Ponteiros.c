/* 9 Faça um programa que lê dois vetores de inteiros com 10 elementos e chama funções para executar as
seguintes operações:
    9.a Soma de vetores
    9.b Subtração de vetores
    9.c Produto escalar dos vetores
Use ponteiros para manipular os vetores nas funções. */

#include <stdio.h>
#include <locale.h>

void lerVetor(int *a){
    int i;
    for(i = 0; i < 10; i++){
        scanf("%d", a+i);
    }
    return;
}

void somarVetores(int *a, int *b, int *s){
    int i;
    for(i = 0; i < 10; i++){
        *(s+i) = *(a+i) + *(b+i);
    }
    return;
}

void subtrairVetores(int *a, int *b, int *s){
    int i;
    for(i = 0; i < 10; i++){
        *(s+i) = *(a+i) - *(b+i);
    }
    return;

void mostrarVetor(int *a){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d\n", *(a+i));
    }
    return;
}

int calcularPE(int *a, int *b){
    int p = 0, i;
    for(i = 0; i < 10; i++){
        p += *(a + i) * *(b+i);
    }
    return p;
}
