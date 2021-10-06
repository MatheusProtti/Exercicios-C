/*
Entrar com o ano de nascimento de uma pessoa e o ano atual e, ao final imprimir a idade
da pessoa.
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anop, mesp, diap, diaa, mesa, anoa, idade, ano, mes, dia;

    printf("Digite seu ano de nascimento. \n");
    printf("Dia: ");
    scanf("%d", &diap);
    printf("Mes: ");
    scanf("%d", &mesp);
    printf("Ano: ");
    scanf("%d", &anop);
    printf("%d/%d/%d \n", diap, mesp, anop);

    printf("Digite o Ano Atual. \n");
    printf("Dia: ");
    scanf("%d", &diaa);
    printf("Mes: ");
    scanf("%d", &mesa);
    printf("Ano: ");
    scanf("%d", &anoa);
    printf("%d/%d/%d \n", diaa, mesa, anoa);

    ano = anoa - anop;
    mes = mesa - mesp;
    dia = diaa - diap;

    printf("Voce tem %d anos %d meses %d dias de vida!\n", ano, mes, dia);


    return 0;
}