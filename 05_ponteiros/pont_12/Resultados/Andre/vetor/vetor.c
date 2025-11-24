#include "vetor.h"
#include <stdio.h>
/**
 * Lê um vetor da entrada padrão.
 * 
 * @param vetor Ponteiro para o vetor que será lido.
 */
void LeVetor(Vetor *vetor){
    int num_vetor;
    scanf("%d",&num_vetor);
    vetor->tamanhoUtilizado=num_vetor;
    for (int i = 0; i < num_vetor; i++)
    {
        scanf("%d",&vetor->elementos[i]);
    }
}

/**
 * Aplica uma operação em um vetor.
 * 
 * @param vetor Ponteiro para o vetor que será utilizado.
 * @param op Ponteiro para a função que será aplicada.
 * @return O resultado da operação.
*/
int AplicarOperacaoVetor(Vetor *vetor, Operation op){
    int acumulador=vetor->elementos[0];
    for (int i = 1; i <vetor->tamanhoUtilizado; i++)
    {   
        acumulador=op(acumulador,vetor->elementos[i]);
        
    }
    return acumulador;
    
}


