#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int soma(int x,int y){
    return x+y;
}
int produto(int x,int y){
    return x*y;
}

int main(){
    Vetor vetor;
    LeVetor(&vetor);
    printf("Soma: %d\n",AplicarOperacaoVetor(&vetor,soma));
    printf("Produto: %d\n",AplicarOperacaoVetor(&vetor,produto));
    return 0;
}