#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. Defina que todos os meses têm 30 dias.

void idade();

void main()
{
    idade();
}

void idade()
{
    int anos, meses, dias, resp;
    printf("\nDigite sua idade expressa em anos, meses e dias respectivamente:");
    scanf("%d %d %d",&anos,&meses,&dias);
    resp=dias;
    resp=resp+(meses*30);
    resp=resp+(anos*360);
    printf("\nSua idade expressa em dias e: %d",resp);
}
