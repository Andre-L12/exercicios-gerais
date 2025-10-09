#include <stdio.h>
void iniciaMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}
int fazMovimento(int linhas, int colunas, int matriz[linhas][colunas], char movimento, int *x, int *y)
{
    matriz[*x][*y] = 1;
    if (movimento == 'C')
    {
        if (*x - 1 < 0 || matriz[*x - 1][*y] == 1)
        {
            return 1;
        }
        else
        {
            matriz[*x - 1][*y] = 1;
            *x = *x - 1;
            return 0;
        }
    }
    else if (movimento == 'B')
    {
        if (*x + 1 > linhas - 1 || matriz[*x + 1][*y] == 1)
        {
            return 1;
        }
        else
        {
            matriz[*x + 1][*y] = 1;
            *x = *x + 1;
            return 0;
        }
    }
    else if (movimento == 'D')
    {
        if (*y + 1 > colunas - 1 || matriz[*x][*y + 1] == 1)
        {
            return 1;
        }
        else
        {
            matriz[*x][*y + 1] = 1;
            *y = *y + 1;
            return 0;
        }
    }
    else if (movimento == 'E')
    {
        if (*y - 1 < 0 || matriz[*x][*y - 1] == 1)
        {
            return 1;
        }
        else
        {
            matriz[*x][*y - 1] = 1;
            *y = *y - 1;
            return 0;
        }
    }
}
int main()
{
    int linhas, colunas, xInicial, yInicial, xFinal, yfinal, i, j, cont = 4, xf, yf, xi, yi;
    char prioridadeMovimento[4];
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    iniciaMatriz(linhas, colunas, matriz);
    scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
    xFinal = xf - 1;
    xInicial = xi - 1;
    yfinal = yf - 1;
    yInicial = yi - 1;

    for (i = 0; i < 4; i++)
    {
        scanf(" %c", &prioridadeMovimento[i]);
    }
    printf("(%d,%d) ", xInicial + 1, yInicial + 1);
    while (!(xFinal == xInicial && yfinal == yInicial) && cont != 0)
    {
        while (1)
        {
            if (fazMovimento(linhas, colunas, matriz, prioridadeMovimento[0], &xInicial, &yInicial))
            {
                cont--;
                if (fazMovimento(linhas, colunas, matriz, prioridadeMovimento[1], &xInicial, &yInicial))
                {
                    cont--;
                    if (fazMovimento(linhas, colunas, matriz, prioridadeMovimento[2], &xInicial, &yInicial))
                    {
                        cont--;
                        if (fazMovimento(linhas, colunas, matriz, prioridadeMovimento[3], &xInicial, &yInicial))
                        {
                            cont--;
                            break;
                        }
                        else
                        {
                            printf("(%d,%d) ", xInicial + 1, yInicial + 1);
                            cont = 4;
                            break;
                        }
                    }
                    else
                    {
                        printf("(%d,%d) ", xInicial + 1, yInicial + 1);
                        cont = 4;
                        break;
                    }
                }
                else
                {
                    printf("(%d,%d) ", xInicial + 1, yInicial + 1);
                    cont = 4;
                    break;
                }
            }
            else
            {
                printf("(%d,%d) ", xInicial + 1, yInicial + 1);

                cont = 4;
                break;
            }
        }
    }

    return 0;
}