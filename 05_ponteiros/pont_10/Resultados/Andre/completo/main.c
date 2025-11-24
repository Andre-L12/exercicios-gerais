#include <stdio.h>
#include <string.h>
#include "pessoa.h"

int main (){
    tPessoa pessoas[18];
    int num_pessoas,num_associacoes;
    scanf("%d",&num_pessoas);
    for (int i = 0; i < num_pessoas; i++)
    {
        pessoas[i]=CriaPessoa();
        LePessoa(&pessoas[i]);
    }
    scanf("%d",&num_associacoes);
    scanf("%*c");
    for (int i = 0; i < num_associacoes; i++)
    {
        AssociaFamiliasGruposPessoas(pessoas,num_pessoas);
    }
    for (int i = 0; i < num_pessoas; i++){
        ImprimePessoa(&pessoas[i]);
    }
    return 0;
}