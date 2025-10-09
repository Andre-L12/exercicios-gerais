#include <stdio.h>
#include <string.h>
int main()
{
    int quatidade_maxima, i,t=0,cont,j;
    char lista_funkos[1000];
    scanf("%d", &quatidade_maxima);
    scanf("%s", lista_funkos);


    for (i = 48; i <= 122; i++)
    {
        cont = 0;
        for (j = 0; j < strlen(lista_funkos); j++)
        {
            if(lista_funkos[j]==i){
                cont++;
            }
        }
        if(cont>quatidade_maxima){
            printf("%c: %d\n",i,cont);
            t++;
        }
    }
    if(t==0){
        printf("NENHUM\n");
    }

    return 0;
}