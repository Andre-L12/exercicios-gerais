#include <stdio.h>
#include <math.h>
#define BASE 8
//função troca base
int TrocaBase(int num_decimal,int base){
    int expoente=0,soma=0,resto,n=1;
    while(n!=0){
        resto=num_decimal%base;
        soma+=(resto*pow(10,expoente));
        expoente++;
        num_decimal=num_decimal/base;
        n=num_decimal;
    }
    return soma;
}
int main(){
    int num_decimal;
    scanf("%d",&num_decimal);
    printf("%d",TrocaBase(num_decimal,BASE));
    return 0;
}