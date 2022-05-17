#include <stdio.h>
#include <stdlib.h>

/*Faça  uma  função  que  leia  uma  matriz  com  3  colunas  por  2  linhas,  preencha-a  com números inteiros, calcule e retorne a função principal
a soma de todos os valores pares da matriz. */

int somaMat();

void main()
{
    int r;
    r =  somaMat();
    printf("\nSoma de todos os valores pares da matriz: %d",r);
}

int somaMat(){
    int mat[3][2],acm=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("\nDigite o valor na posicao [%d] [%d] da matriz: ",i,j);
            scanf("%d",&mat[i][j]);
            acm =  acm + mat[i][j];
        }
    }
    return acm;
}
