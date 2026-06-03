#include <stdio.h>

int main() {

    int numero = 0;

    printf("Informe um numero inteiro positivo: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    int fatorial = 1;

    if(numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for(int i = 1; i <= numero; i++) {
            fatorial = fatorial * i;
        }
        printf("%i! = %i\n", numero, fatorial);
    }

    return 0;
}