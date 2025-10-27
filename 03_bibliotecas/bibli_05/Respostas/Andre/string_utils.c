#include "string_utils.h"
/**
 * @brief Retorna o tamanho de uma string.
 * @param str A string para obter o tamanho.
 * @return O tamanho da string.
 */
int string_length(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

/**
 * @brief Copia uma string de origem para destino.
 * @param src A string de origem.
 * @param dest A string de destino.
 */
void string_copy(char *src, char *dest){
    int i=0;
    while(src[i]!='\0'){
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

/**
 * @brief Converte todos os caracteres de uma string para maiúsculas.
 * @param str A string para converter.
 */
void string_upper(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>96 && str[i]<123){
            str[i]=str[i]-  32;
        }
        i++;
    }
}

/**
 * @brief Converte todos os caracteres de uma string para minúsculas.
 * @param str A string para converter.
 */
void string_lower(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>64 && str[i]<91){
            str[i]=str[i]+32;
        }
        i++;
    }
}

/**
 * @brief Inverte uma string.
 * @param str A string para inverter.
 */
void string_reverse(char *str){
    int i,tamanho=string_length(str),t=tamanho-1;
    char aux;

    for ( i = 0; i < tamanho/2; i++)
    {
        aux=str[i];
        str[i]=str[t-i];
        str[t-i]=aux;
    }
}
