#include<stdio.h> 
#include<string.h>

int main() {

    char verbo[50];

    printf("Entre com um verbo: ");
    scanf("%s", verbo);
    while(getchar() != '\n');

    int tamanho = strlen(verbo);
    int termina_com_ar = verbo[tamanho - 2] == 'a' && verbo[tamanho - 1] == 'r';

    if(termina_com_ar) {
    printf("O verbo '%s' termina com ar\n", verbo);
    } else {
    printf("O verbo '%s' nao termina com ar\n", verbo);
    }

    return 0;
}