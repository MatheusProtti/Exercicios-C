/*
Criar um algoritmo que leia o valor de um produto e imprima na console este valor com
30% de acréscimo.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float PreProduto, acrescimo;

    printf("Digite o preco do produto: \n");
    scanf("%f", &PreProduto);

    acrescimo = ((PreProduto*30)/100) + PreProduto;

    printf("%.2f", acrescimo);
    return 0;
}
