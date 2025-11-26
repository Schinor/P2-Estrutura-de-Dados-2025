#include <stdio.h>

int main() {

    int contador = 0;

    while (contador <= 500) {
        if (contador == 0) {
            contador++;
            continue;
        }
        else if (contador % 5 == 0) {
            printf("Número: %d \n", contador);
        }

        contador++;

    }

    return 0;
}