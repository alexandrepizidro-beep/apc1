#include <stdio.h>

int main() {

    int num1;
    int num2;

    printf("digite o primeiro: ");
    scanf("%i", &num1);
    while(getchar() != '\n'); // limpar o buffer

    printf("digite o segundo: ");
    scanf("%i", &num2);
    while(getchar() != '\n'); // limpar o buffer

    printf("primeiro=%i e segundo=%i\n", num1, num2);


    return 0;
}