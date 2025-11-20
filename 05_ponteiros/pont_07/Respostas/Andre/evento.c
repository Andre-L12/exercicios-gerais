#include "evento.h"
#include <stdio.h>
#include <string.h>


/**
 * Cadastra um novo evento no calendário e o insere na próxima posição do array.
 *
 * @param eventos Array de eventos onde o novo evento será cadastrado.
 * @param numEventos Ponteiro para o número atual de eventos cadastrados.
 */
void cadastrarEvento(Evento* eventos, int* numEventos){
    if(*numEventos<10){
        Evento e = {0}; // jeito curto
        char nome[50]=""; // Nome do evento.
        int dia;       // Dia do evento.
        int mes;       // Mês do evento.
        int ano;       // Ano do evento.
        scanf(" %49[^\n]",nome);
        scanf(" %d %d %d",&dia,&mes,&ano);
        strcpy(e.nome,nome);
        e.dia=dia;
        e.mes=mes;
        e.ano=ano;
        eventos[*numEventos]=e;
        *numEventos=*numEventos+1;
        printf("Evento cadastrado com sucesso!\n");
    }else{
        printf("Limite de eventos atingido!\n");
    }
    
    
}

/**
 * Exibe todos os eventos cadastrados no calendário.
 *
 * @param eventos Array de eventos a serem exibidos.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void exibirEventos(Evento* eventos, int* numEventos){
    if(*numEventos==0){
        printf("Nenhum evento cadastrado.\n");
    }else{
        printf("Eventos cadastrados:\n");
        for (int i = 0; i < *numEventos; i++)
        {
            printf("%d - %s - %d/%d/%d\n",i,eventos[i].nome,eventos[i].dia,eventos[i].mes,eventos[i].ano);
        }
    }
    
}

/**
 * Troca a data de um evento específico no calendário.
 *
 * @param eventos Array de eventos onde o evento será modificado.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarDataEvento(Evento* eventos, int* numEventos){
    int in,dia,mes,ano;
    scanf("%d %d %d %d",&in,&dia,&mes,&ano);
    if(in>=*numEventos){
        printf("Indice invalido!\n");
    }else{  
        eventos[in].dia=dia;
        eventos[in].mes=mes;
        eventos[in].ano=ano;
        printf("Data modificada com sucesso!\n");
    }

}

/**
 * Troca a posição de dois eventos, a partir do índice, dentro do array de eventos.
 *
 * @param eventos Array de eventos onde a troca será realizada.
 * @param indiceA Ponteiro para o primeiro índice.
 * @param indiceB Ponteiro para o segundo índice.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarIndicesEventos(Evento* eventos, int* indiceA, int* indiceB, int* numEventos){
    if(*indiceA>=*numEventos || *indiceB>=*numEventos){
        printf("Indices invalidos!\n");
    }
    Evento aux=eventos[*indiceA];
    eventos[*indiceA]=eventos[*indiceB];
    eventos[*indiceB]=aux;
    printf("Eventos trocados com sucesso!\n");
}

