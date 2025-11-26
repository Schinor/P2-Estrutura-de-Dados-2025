#include <stdio.h>
#include "Leitor.c"

int main() {
    
    float valorTotal = 0.0;
    int opcao;
    int contador = 0;

	printf("---------------------------------\n");
    printf("| Opção | Item      | Preço     |\n");
    printf("|   1   | Camisa    | R$ 40,00  |\n");
    printf("|   2   | Calça     | R$ 80,00  |\n");
    printf("|   3   | Cinto	    | R$ 25,00  |\n");
    printf("|   4   | Sapatos   | R$ 120,00 |\n");
    printf("|   5   | Chapéu    | R$ 35,00  |\n");
    printf("|   0   | Finalizar |           |\n");
    printf("---------------------------------\n");

    while (contador != 5) {

        printf("Digite uma opção: ");

        opcao = ler_int();

        contador ++;

        switch (opcao) {

        case 0:
            contador = contador + 6;
            break;
        case 1:
            valorTotal = valorTotal + 40.00;
            break;
        case 2:
            valorTotal = valorTotal + 80.00;
            break;
        case 3:
            valorTotal = valorTotal + 25.00;
            break;
        case 4:
            valorTotal = valorTotal + 120.00;
            break;
        case 5:
            valorTotal = valorTotal + 35.00;
            break;
        default:
            break;

        }
    }

    printf("Valor total da compra: %.2f \n", valorTotal);

    return 0;

}