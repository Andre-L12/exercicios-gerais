#include <stdio.h>
#include <math.h>

void VerificaAcerto(float x_alvo,float y_alvo,float x_disparo,float y_disparo,float raio_alvo, float raio_disparo){
     float distancia= sqrt(pow(x_alvo-x_disparo,2)+pow(y_alvo-y_disparo,2));
     float somaRaios= raio_alvo+raio_disparo;
     if (distancia<=somaRaios){
        printf("ACERTOU");
     }else{
        printf("ERROU");
     }
}

int main(){
    float raio_alvo,x_alvo,y_alvo,raio_disparo,x_disparo,y_disparo;
    scanf("%f %f %f\n %f %f %f",&x_alvo,&y_alvo,&raio_alvo,&x_disparo,&y_disparo,&raio_disparo);
    VerificaAcerto(x_alvo,y_alvo,x_disparo,y_disparo,raio_alvo,raio_disparo);
    
}
