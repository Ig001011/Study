//Faça um programa que tome como entrada do usuário três valores de cores R, G e B,
//e imprima em sequência a distância euclidiana para cada uma das cores.
//Armazene os dados de distância em um vetor, e indique o menor valor obtido.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(){

    int R1,G1,B1;
    int R2,G2,B2;
    int R3,G3,B3;
    float dist1, dist2, dist3;
    float vetor[3];

    printf("Digite a primeira cor RGB em sequencia: ");
    scanf("%d",&R1);
    scanf("%d",&G1);
    scanf("%d",&B1);

    printf("Digite a segunda cor RGB em sequencia: ");
    scanf("%d",&R2);
    scanf("%d",&G2);
    scanf("%d",&B2);

    printf("Digite a terceira cor RGB em sequencia: ");
    scanf("%d",&R3);
    scanf("%d",&G3);
    scanf("%d",&B3);

    dist1 = pow(R1-R2,2.00)+ pow(G1-G2,2.00)+ pow(B1-B2,2.00);
    dist1 = pow(dist1,0.5);

    dist2 = pow(R2-R3,2.00)+ pow(G2-G3,2.00)+ pow(B2-B3,2.00);
    dist2 = pow(dist2,0.5);

    dist3 = pow(R3-R1,2.00)+ pow(G3-G1,2.00)+ pow(B3-B1,2.00);
    dist3 = pow(dist3,0.5);

    vetor[1] = dist1;
    vetor[2] = dist2;
    vetor[3] = dist3;

    printf("Dist RGB1 e RGB2: %f",dist1);
    printf("\n");
    printf("Dist RGB2 e RGB3: %f",dist2);
    printf("\n");
    printf("Dist RGB3 e RGB1: %f",dist3);
    printf("\n");
    printf("Segue a ordem da menor distancia para a maior: ");
    printf("\n");



    if ( vetor[1] < vetor[2] <  vetor[3] ){
        printf("RGB1 e RGB2");
        printf("\n");

    }


    if ( vetor[2] < vetor[1] < vetor[3]){
        printf("RGB2 e RGB3");
        printf("\n");



    }

    if ( vetor[3] < vetor[2] < vetor[1]){
        printf("RGB3 e RGB1");
        printf("\n");



}
return 0;


}

