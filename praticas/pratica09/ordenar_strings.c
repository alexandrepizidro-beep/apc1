#include<stdio.h> // sabor strings
#include<string.h>

int main() {

    char texto1[50];
    char texto2[50];
    char texto3[50];
    char texto4[50];

    printf("Entre com o primeiro texto: ");
    scanf("%s", texto1);
    while(getchar() != '\n');

    printf("Entre com o segundo texto: ");
    scanf("%s", texto2);
    while(getchar() != '\n');

    printf("Entre com o terceiro texto: ");
    scanf("%s", texto3);
    while(getchar() != '\n');

    if(strcmp(texto1, texto2) > 0) {
        strcpy(texto4, texto1);
        strcpy(texto1, texto2);
        strcpy(texto2, texto4);
    }
    if(strcmp(texto1, texto3) > 0) {
        strcpy(texto4, texto1);
        strcpy(texto1, texto3);
        strcpy(texto3, texto4);
    }
    if(strcmp(texto2, texto3) > 0) {
        strcpy(texto4, texto2);
        strcpy(texto2, texto3);
        strcpy(texto3, texto4);
    }
    printf("Strings em ordem alfabetica:\n");
    printf("%s\n", texto1);
    printf("%s\n", texto2);
    printf("%s\n", texto3);

    return 0;
}