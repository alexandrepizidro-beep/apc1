#include<stdio.h>

int main() {

    char palavras[5][50];

    for(int i = 0; i < 5; i++) {
        printf("Entre com a palavra %i: ", i + 1);
        scanf("%[^\n]s", palavras[i]);
        while(getchar() != '\n');
    }

    printf("\nPalavras lidas:\n");

    for(int i = 0; i < 5; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}