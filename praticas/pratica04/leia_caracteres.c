#include <stdio.h>

int main() {

    char caractere;

    printf("digite um caractere: ");
    scanf("%c", &caractere);
    while(getchar() != '\n'); // limpar o buffer

    printf("caractere informado: %c\n", caractere);
    printf("codigo ASCII: %i\n", caractere);
    return 0;
}