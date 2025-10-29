

#include "reserva.h"
#include <stdio.h>
/**
 * Função que recebe os dados necessários para criar uma reserva
 * e retorna a reserva criada.
 * morRes: Morador que está fazendo a reserva
 * aRes: Área que está sendo reservada
 * dRes: Data da reserva
 * qtdConvidados: Quantidade de convidados que o morador irá levar
 *
 * Retorna uma Reserva com os dados informados
 */
Reserva criaReserva(Morador morRes, Area aRes, Data dRes, int qtdConvidados){
    Reserva reserva;
    reserva.morador=morRes;
    reserva.area=aRes;
    reserva.data=dRes;
    reserva.qtdConvidados=qtdConvidados;
    return reserva;
}

/**
 * Função que verifica se é possível realizar uma reserva solicitada com os dados informados.
 * Essa verificação é baseada em todas as regras de reserva de áreas comuns descritas na especificação.
 *
 * agendaReservas: array que armazena todas as reservas de áreas comuns já realizadas
 * nRes: quantidade de reservas contidas no array agendaReservas
 * morRes: Morador que está solicitando a reserva
 * aRes: Área que está sendo solicitada
 * dRes: Data da reserva solicitada
 * qtdConvidados: Quantidade de convidados que o morador irá levar
 *
 * Retorna 1 se a reserva pode ser realizada e 0 caso contrário
 */
int verificaSolicitacaoReserva(Reserva *agendaReservas, int nRes, Morador morRes, Area aRes, Data dRes, int qtdConvidados){
    int i;
    if(calculaIdadeMorador(morRes,dRes)<18) return 0;
    if(qtdConvidados>getCapacidadeArea(aRes)) return 0;
    for ( i = 0; i < nRes; i++)
    {
        if(comparaMorador(agendaReservas[i].morador,morRes) && comparaData(dRes,agendaReservas[i].data)) return 0;
        if(comparaArea(agendaReservas[i].area,aRes)&& comparaData(dRes,agendaReservas[i].data)) return 0;
    }
    return 1;
    
}

/**
 * Função que imprime todas as informações de uma Reserva conforme o formato
 * descrito na especificação. Dica: veja o arquivo de saída nos casos de teste.
 *
 */
void imprimeReserva(Reserva r){
    printf("--------- RESERVA -----------\n");
    printf("Morador: \n");
    imprimeMorador(r.morador);
    printf("\n");
    printf("Area reservada: \n");
    imprimeArea(r.area);
    printf("Data da reserva: ");
    imprimeData(r.data);
    printf("Quantidade de convidados: %d\n",r.qtdConvidados);
    printf("Taxa de ocupação: %d%%\n",(r.qtdConvidados*100/getCapacidadeArea(r.area)));
    printf("------------------------------\n");
}

