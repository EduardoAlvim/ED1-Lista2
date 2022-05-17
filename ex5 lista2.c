#include <stdio.h>
#include <stdlib.h>

/*Faça uma função que leia uma struct com as informações de nome, sexo e idade de no máximo  10  pessoas.
Mostre  na  função  a  quantidades  de  pessoas  do  sexo  masculino  e retorne para a função principal
a quantidade de pessoas com a idade maior que 15 anos */

typedef struct{
    char nome[100];
    char sexo;
    int idade;
}pessoa;

int quant();

void main()
{
    int r;
    r = quant();
    printf("\nQuantidade de pessoas com a idade maior que 15 anos: %d",r);
}

int quant(){
    pessoa p[10];
    int contm=0, conti=0;
    for(int i=0;i<10;i++){
        printf("\nDigite seu nome: ");
        fflush(stdin);
        gets(p[i].nome);
        printf("\nDigite seu sexo(M ou F): ");
        scanf("%c",&p[i].sexo);
        if(p[i].sexo == 'M' || p[i].sexo == 'm'){
            contm++;
        }
        printf("\nDigite sua idade: ");
        scanf("%d",&p[i].idade);
        if(p[i].idade > 15){
            conti++;
        }
    }
    printf("\nQuantidade de homens: %d",contm);
    return conti;
}
