#include <stdio.h>
#include <stdlib.h>

//Faça  uma  função  que  leia  um  vetor  com  oito  números  inteiros,  calcule  e  retorne  a função principal a soma de todos os valores do vetor.

int somaVet();

void main()
{
    int r;
    r = somaVet();
    printf("\nSoma de todos os valores do vetor: %d",r);
}

int somaVet(){
    int vet[8],acm=0;
    for(int i = 0;i <8;i++){
        printf("\nDigite o valor na posicao %d do vetor: ",i);
        scanf("%d",&vet[i]);
        acm = acm + vet[i];
    }
    return acm;
}
