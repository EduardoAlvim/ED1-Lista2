#include <stdio.h>
#include <stdlib.h>

/*O  custo  ao  consumidor  de  um  carro  novo  �  a  soma  do  custo  de  f�brica  com  a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica).
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%,
escrever um algoritmo que leia o custo de f�brica de um carro e escreva o custo ao consumidor. */

float calculo();

void main()
{
    float r;
    r=calculo();
    printf("\nO custo de seu carro sera: %.2f",r);
}

float calculo(){
    float custof, custo, pdd, imp;
    printf("\nDigite o custo de fabrica do carro: ");
    scanf("%f",&custof);
    pdd = custof*0.28;
    imp = custof*0.45;
    custo = custof + pdd + imp;
    return custo;
}
