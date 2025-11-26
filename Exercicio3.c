#include "Leitor.c"
#include <stdio.h>

int main() {

    int numero_secreto = 75;
    int numeroInserido;
    int contador = 1;

    

    while (contador = 1) {
        printf("Tente acertar o número secreto (1-100): \n");
        numeroInserido = ler_int();
        if(numeroInserido == 75) {
            printf("Você acertou o número é: %d\n", numero_secreto);
            break;
        } else if (numeroInserido < 75) {
            printf("O número secreto é maior que %d\n", numeroInserido);
        } else if (numeroInserido > 75) {
            printf("O número secreto é menor que %d\n", numeroInserido);
        } else {
            printf("Número inválido\n");
        }
        continue;
    }

    return 0;
}