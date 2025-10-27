#include "string_utils.h"
#include <stdio.h>

void print_menu(){
    printf("1 - Tamanho da string\n");
    printf("2 - Copiar string\n");
    printf("3 - Converter string para letras maiusculas\n");
    printf("4 - Converter string para letras minusculas\n");
    printf("5 - Imprimir string ao contrario\n");
    printf("6 - Encerrar o programa\n");
    printf("Opcao escolhida: \n");
}
int main(){
    char palavra[1000];
    int opcao;
    scanf(" %[^\n]",palavra);
     while(scanf("%d",&opcao)==1){
        print_menu();
        switch (opcao)
        {
        case 1:
            printf("Tamanho da string: %d\n\n",string_length(palavra));
            break;
        case 2:
            char copia[100];
            string_copy(palavra,copia);
            printf("String copiada: %s\n\n",copia);
            break;
        case 3:
           string_upper(palavra);
           printf("String convertida para maiusculas: %s\n\n",palavra);
            break;
        case 4:
            string_lower(palavra);
            printf("String convertida para minusculas: %s\n\n",palavra);
            break;
        case 5:
            string_reverse(palavra);
            printf("String invertida: %s\n\n",palavra);
            break;
        default:
            break;
            exit(0);
        }
    }
    return 0;

}