#include "data.h"
#include <stdio.h>
/*
 * Função que lê uma data no formato dd/mm/aaaa
 * e retorna a Data lida
 */
Data lerData(){
    Data data;
    scanf("%d/%d/%d\n",&data.dia,&data.mes,&data.ano);
    return data;
}

/*
 * Função que imprime uma data no formato dd/mm/aaaa
 * Com \n no final.
 */
void imprimeData(Data data){
    printf("%d/%d/%d\n",data.dia,data.mes,data.ano);
}

/*
 *   Função que compara se as duas datas são exatamente iguais
 *   Retorna 1 se verdadeiro e 0 caso contrário
 */
int comparaData(Data d1, Data d2){
    if(d1.dia==d2.dia){
        if(d1.mes==d2.mes){
            if(d1.ano==d2.ano) return 1;
            else return 0;
        }else return 0;
    }else return 0;
}

/*
 *  Função que calcula a diferença de anos entre duas datas da mesma
 *  forma que calculamos aniversários.
 *  Exemplo: 25/12/1990 e 10/12/2025 = 34 anos
 *  Retorna a diferença de anos entre as duas datas
 */
int calcularDiffAnosData(Data inicio, Data fim){
    int diferenca = fim.ano - inicio.ano;
    if(fim.mes>inicio.mes){
        return diferenca;
    }else if(fim.mes==inicio.mes){
        if(fim.dia>=inicio.dia){
            return diferenca;
        }else{
            return diferenca-1;
        }
    }
    return diferenca;
}

