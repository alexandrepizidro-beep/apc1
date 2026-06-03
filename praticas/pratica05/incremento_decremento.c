#include<stdio.h>

int main() {

    // entrada

    int numero = 0;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    // processamento e saida

    printf("Numero original = %i\n", numero);

    printf("Pre-incremento (++numero) = %i\n", ++numero);
    printf("Valor atual = %i\n", numero);

    numero = numero - 1;

    printf("Pos-incremento (numero++) = %i\n", numero++);
    printf("Valor atual = %i\n", numero);

    printf("Pre-decremento (--numero) = %i\n", --numero);
    printf("Valor atual = %i\n", numero);

    numero = numero + 1;

    printf("Pos-decremento (numero--) = %i\n", numero--);
    printf("Valor atual = %i\n", numero);

    return 0;
}