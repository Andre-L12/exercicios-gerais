#include <stdio.h>
int main(){
    int linhas,contagem=0,i,j;
    scanf("%d",&linhas);
    for ( i = 1; i <= linhas; i++)
    {
        for ( j = 0; j < i; j++)
        {
            contagem++;
            printf("%d ",contagem);
        }printf("\n");
        
    }
    return 0;
}