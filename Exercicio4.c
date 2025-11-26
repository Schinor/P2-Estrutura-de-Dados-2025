#include "Leitor.c"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int saldoUsuario = 1000;
    int numeroAleatorio;
    int numero;

    srand(time(NULL));
    
    while (saldoUsuario > 0 && saldoUsuario < 3000) {
        numeroAleatorio = (rand() %10) + 1;
        printf("Tente acertar o número(1-10): ");
        numero = ler_int();

        if (numero == numeroAleatorio) {
            printf("Você acertou, mais 300 pontos. \nPontuação atual: %d\n", (saldoUsuario = (saldoUsuario + 300)));
        } else {
            printf("Você errou, menos 100 pontos. \nPontuação atual: %d\n", (saldoUsuario = (saldoUsuario - 100)));
        }
    }

    return 0;
}