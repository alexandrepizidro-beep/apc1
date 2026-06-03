#include<stdio.h>

int main() {

    // entrada

    int numero = 0;

    printf("Entre com um numero de quatro digitos: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    // processamento

    int milhares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    // saida

    printf("Numero informado: %i\n", numero);
    printf("Milhares = %i\n", milhares);
    printf("Centenas = %i\n", centenas);
    printf("Dezenas = %i\n", dezenas);
    printf("Unidades = %i\n", unidades);

    return 0;
}