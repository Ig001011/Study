#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float temp(float altura){


    float resposta;

    resposta = 2 * altura/10;
    resposta = sqrt(resposta);

    return resposta;

}

int main(){


    float altura,respostaf;
    printf("Informe a altura do objeto em metros:");
    scanf("%f",&altura);
    respostaf = temp(altura);
    printf("O objeto leva %.2f segundos para cair de %.2f metros",respostaf,altura);

    return 0;

}
