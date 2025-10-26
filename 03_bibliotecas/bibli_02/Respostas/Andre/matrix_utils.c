#include "matrix_utils.h"
#include <stdio.h>


void matrix_read(int rows, int cols, int matrix[rows][cols]){
    int i,j;
  
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {   
            scanf("%d",&matrix[i][j]);
        }
        
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols]){
    int i,j;
    for ( i = 0; i < rows; i++)
    {
        printf("|");
        for ( j = 0; j < cols; j++)
        {
            if(j+1>=cols) printf("%d",matrix[i][j]);
            else printf("%d ",matrix[i][j]);
        }printf("|\n");
    }printf("\n");
}

/**
 * @brief Verifica se é possível somar duas matrizes.
 * @param rows1 Número de linhas da primeira matriz.
 * @param cols1 Número de colunas da primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @param cols2 Número de colunas da segunda matriz.
 * @return 1 se for possível somar as matrizes, 0 caso contrário.
 */
int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2){
    if ((rows1==rows2) && (cols1==cols2))return 1;
    else return 0;
}

/**
 * @brief Verifica se é possível subtrair duas matrizes.
 * @param rows1 Número de linhas da primeira matriz.
 * @param cols1 Número de colunas da primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @param cols2 Número de colunas da segunda matriz.
 * @return 1 se for possível subtrair as matrizes, 0 caso contrário.
 */
int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2){
    if ((rows1==rows2) && (cols1==cols2))return 1;
    else return 0;
}

/**
 * @brief Verifica se é possível multiplicar duas matrizes.
 * @param cols1 Número de colunas da primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @return 1 se for possível multiplicar as matrizes, 0 caso contrário.
 */
int possible_matrix_multiply(int cols1, int rows2){
    if ( cols1==rows2) return 1;
    else return 0;
}

/**
 * @brief Soma duas matrizes e armazena o resultado em result. Não é feito teste de possibilidade de soma.
 * @param rows1 Número de linhas da primeira matriz.
 * @param cols1 Número de colunas da primeira matriz.
 * @param matrix1 Primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @param cols2 Número de colunas da segunda matriz.
 * @param matrix2 Segunda matriz.
 * @param result Matriz que armazenará o resultado da soma.
 */
void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i,j;
    for ( i = 0; i < rows1; i++)
    {
        for ( j = 0; j < cols1; j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }
    
}

/**
 * @brief Subtrai duas matrizes e armazena o resultado em result. Não é feito teste de verificação de subtração.
 * @param rows1 Número de linhas da primeira matriz.
 * @param cols1 Número de colunas da primeira matriz.
 * @param matrix1 Primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @param cols2 Número de colunas da segunda matriz.
 * @param matrix2 Segunda matriz.
 * @param result Matriz que armazenará o resultado da subtração.
 */
void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i,j;
    for ( i = 0; i < rows1; i++)
    {
        for ( j = 0; j < cols1; j++)
        {
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
        
    }
}

/**
 * @brief Multiplica duas matrizes e armazena o resultado em result. Não é feito teste de verificação para a multiplicação. 
 *  A matriz result deve ser inicializada com 0 dentro desta função.
 * @param rows1 Número de linhas da primeira matriz.
 * @param cols1 Número de colunas da primeira matriz.
 * @param matrix1 Primeira matriz.
 * @param rows2 Número de linhas da segunda matriz.
 * @param cols2 Número de colunas da segunda matriz.
 * @param matrix2 Segunda matriz.
 * @param result Matriz que armazenará o resultado da multiplicação.
 */
void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]){
    int i,j,p,soma;
    for ( i = 0; i < rows1; i++)
    {
        for ( j = 0; j < cols2; j++)
        {
            result[i][j]=0;
        }
        
    }
    for ( i = 0; i < rows1; i++)
    {
        for ( j = 0; j < cols2; j++)
        {
            soma=0;
            for ( p = 0; p <cols1 ; p++)
            {
                soma += matrix1[i][p] * matrix2[p][j];
            }
            result[i][j]=soma;
        }
        
    }
}

/**
 * @brief Transpõe a matriz especificada. O resultado da transposta deve ser armazenado em result.
 * @param rows Número de linhas da matriz.
 * @param cols Número de colunas da matriz.
 * @param matrix Matriz a ser transposta.
 * @param result Matriz que armazenará o resultado da transposição.
 */
void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){
    int i,j;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            result[j][i]=matrix[i][j];
        }
        
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar){
    int i,j;
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            matrix[i][j]= scalar * matrix[i][j];
        }
        
    }
}
