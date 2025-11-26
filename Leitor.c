#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ler_int() {

    int numero;
    scanf("%d", &numero);
    getchar();

    return numero;
}

float ler_decimal() {

    float numero;
    scanf("%f", &numero);
    getchar();

    return numero;
}

char* ler_texto() {

    char* texto = malloc(60 * sizeof(char));
    fgets(texto, 60, stdin);
    texto[strcspn(texto, "\n")] = 0;

    return texto;
}