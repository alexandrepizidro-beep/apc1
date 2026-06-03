#include<stdio.h>

int main() {

    // entrada

    float operador1 = 0.0f;
    float operador2 = 0.0f;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &operador1);
    while(getchar() != '\n');

    printf("Entre com o segundo numero: ");
    scanf("%f", &operador2);
    while(getchar() != '\n');

    // processamento

    float soma = operador1 + operador2;
    float subtracao = operador1 - operador2;
    float multiplicacao = operador1 * operador2;
    float divisao = operador1 / operador2;

    // saida

    printf("%.2f + %.2f = %.2f\n", operador1, operador2, soma);
    printf("%.2f - %.2f = %.2f\n", operador1, operador2, subtracao);
    printf("%.2f * %.2f = %.2f\n", operador1, operador2, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", operador1, operador2, divisao);

    return 0;
}