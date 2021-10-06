/*
Faça um algoritmo que leia o valor unitário de um produto, a quantidade e o percentual de
imposto. Calcule e mostre o valor total do produto acrescentando o imposto lido.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float ValDeUni, ValTotComImp, ValSoma;
    int Qntd, PerDeImp;

    printf("Digite o Valor unitario do produto: \n");
    scanf("%f", &ValDeUni);
    printf("Digite a Quantidade que deseja: \n");
    scanf("%d", &Qntd);
    printf("Digite o percentual de imposto: \n");
    scanf("%d", &PerDeImp);
 
    ValSoma = ValDeUni*Qntd;                          
    ValTotComImp = ((ValSoma*PerDeImp)/100) + ValSoma;  

    printf("O valor total do produto acrescentando o imposto  %.2f \n", ValTotComImp);

    return 0;
}
