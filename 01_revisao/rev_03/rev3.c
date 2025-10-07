#include <stdio.h>
int main(){
    int num_livros,i,j,cont, livros_comprar=0;
    scanf("%d",&num_livros);
    int mat[num_livros];
    for ( i = 0; i < num_livros; i++)
    {
        scanf("%d",&mat[i]);
    }
    for ( i = 0; i < num_livros; i++)
    {   cont=0;
        for ( j = 0; j < num_livros; j++)
        {
            if(mat[i]==mat[j]){
                cont++;
            }
        }
        if (cont==1){
            printf("%d ",mat[i]);
            livros_comprar++;
        }
        
    }
    if(livros_comprar==0){
        printf("NENHUM");
    }
    return 0;
}