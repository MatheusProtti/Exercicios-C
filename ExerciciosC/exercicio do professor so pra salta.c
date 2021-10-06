#include <stdio.h>

float adicionar(float num1, float num2)
{
    return num1 + num2;
}

float subtrair(float num1, float num2)
{
    return num1 - num2;
}

float multiplicar(float num1, float num2)
{
    return num1 * num2;
}

float dividir(float num1, float num2)
{
    return num1 / num2;
}

int main(int argc, char const *argv[])
{
    int opcao;
    float num1, num2;
    // declaração de um ponteiro de array de funções chamado de calculadora
    // cujas funções recebem dois parâmetros cada do tipo float
    float (*calculadora[])(float, float) = {adicionar, subtrair, multiplicar, dividir};

    printf("Escolha: 0 para adicionar, 1 para subtrair, 2 para multiplicar e 3 para dividir\n");
    scanf("%d", &opcao);

    printf("\nDigite os numeros:\n");
    printf("Numero 1: ");
    scanf("%f", &num1);
    printf("Numero 2: ");
    scanf("%f", &num2);

    if (opcao < 0 || opcao > 3)
    {
        printf("\n\nOpcao invalida! Opcoes validas sao 0, 1, 2 e 3!");
    }
    else
    {
        printf("\n\nResultado: %12.2f", calculadora[opcao](num1, num2));
    }

    /* Método tradicional de chamada de função
    switch (opcao){
        case 0: 
        adicionar(num1, num2);
        break;
        case 1:
        sutrair(num1, num2);
        break;
    }
    */

    return 0;
}


/*
exercicio m001 so pra nao perde se eu fizer o outro errado
#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int QntTotdeCal;
    int prato[4] = {180, 230, 250, 350};
    int sobremesa[4]= {75, 110, 170, 200};
    int bebida[4] = {20, 70, 100, 65};
    int i;

    printf("Escolha seu Prato.\n");

    for (i = 0; i < 1; i++){
        printf("Vegetariano - %dcal\n", prato[0]);
        printf("Peixe - %dcal\n", prato[1]);
        printf("Frango - %dcal\n", prato[2]);
        printf("Carne - %dcal\n", prato[3]);
    }

    scanf("%d", prato);

    return 0;
}
*/