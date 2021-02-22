#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float area(float r){

float pi = 3.1415;
float res = 0;
res = 4.0*pi*r*r;
return res;

}

float volume(float r){

float pi = 3.1415;
float resp = 0;
resp = 4.0/3.0*pi*r*r*r;

return resp;

}

int main(void)
{
    float r = 0, resultado = 0, resultado2 = 0;

    printf("digite o valor do raio:");
    scanf("%f", &r);
    resultado = area(r);
    printf("Area = %.2f ", resultado);
    resultado2 = volume(r);
    printf("Volume = %.2f",resultado2);

    return 0;




}









