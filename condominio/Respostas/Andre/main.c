#include <stdio.h>
#include "area.h"
#include "reserva.h"
#include "morador.h"
int main(){
    int i,j,Nareas,Nmoradores,Nreservas,nreservas=0;
    Area areas[10];
    Morador moradores[100];
    Reserva reservas[100];
    scanf("%d\n",&Nareas);
    for ( i = 0; i < Nareas; i++)
    {
        areas[i]=lerArea();
    }
    scanf("%d\n",&Nmoradores);
    for ( i = 0; i < Nmoradores; i++)
    {
        moradores[i]=lerMorador();
    }
    scanf("%d\n",&Nreservas);
    for ( i = 0; i < Nreservas; i++)
    {
            char id[5];
            char cpf[15];
            int convidados;
            int emorador=0;
            int earea=0;
            Area a;
            Morador b;
            scanf(" %[^\n]\n",id);
            scanf(" %[^\n]\n",cpf);
            Data data=lerData();
            scanf("%d\n",&convidados);
            for ( j = 0; j < Nareas; j++)
            {
                if(verificaIdArea(areas[j],id)){
                    a=areas[j];
                    earea=1;
                    
                }
            }
            for ( j = 0; j < Nmoradores; j++)
            {
                if(verificaCPFMorador(moradores[j],cpf)){
                    b=moradores[j];
                    emorador=1;
                }
            }
            if(verificaSolicitacaoReserva(reservas,nreservas,b,a,data,convidados)&&earea&&emorador) {
                reservas[nreservas]=criaReserva(b,a,data,convidados);
                nreservas++;
            }
    }for ( i = 0; i < nreservas; i++)
    {
        imprimeReserva(reservas[i]);
    }
    return 0;
}