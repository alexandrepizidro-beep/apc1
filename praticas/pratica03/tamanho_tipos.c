#include <stdio.h>

int main() {

    printf("Tamanho do tipo char: %zu bytes\n", sizeof(char));
    printf("Tamanho do tipo short int: %zu bytes\n", sizeof(short int));
    printf("Tamanho do tipo int: %zu bytes\n", sizeof(int));
    printf("Tamanho do tipo long int: %zu bytes\n", sizeof(long int));
    printf("Tamanho do tipo long long int: %zu bytes\n", sizeof(long long int));
    printf("Tamanho do tipo float: %zu bytes\n", sizeof(float));
    printf("Tamanho do tipo double: %zu bytes\n", sizeof(double));
    printf("Tamanho do tipo long double: %zu bytes\n", sizeof(long double));

    return 0;
}