/*
Calcular a quantidade dinheiro gasta por um fumante. Dados: o número de anos que ele
fuma, o no de cigarros fumados por dia e o preço de uma carteira. 
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float QntGastaPorUmFumante, PreDeUmaCarteira, anos, cigarros, CarteiraCigarro;
    int NumDeAnosQueFuma, NumDeCigarrosFumadosPorDia;

    printf("Ha quantos anos voce fuma? \n");
    scanf("%d", &NumDeAnosQueFuma);
    printf("Quantos cigarros voce fuma por dia ? \n");
    scanf("%d", &NumDeCigarrosFumadosPorDia);
    printf("Qual o preco da carteira de cigarro ? \n");
    scanf("%f", &PreDeUmaCarteira);

    CarteiraCigarro = PreDeUmaCarteira / 20;
    cigarros = NumDeCigarrosFumadosPorDia * CarteiraCigarro;
    anos = NumDeAnosQueFuma * 365;
    QntGastaPorUmFumante = anos * cigarros;

    printf("Voce gasta %.2f", QntGastaPorUmFumante);

    return 0;
}
