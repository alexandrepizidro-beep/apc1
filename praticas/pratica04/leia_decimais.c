#include <stdio.h>

int main() {

    float nota_a1, nota_a2;

    printf("informe a nota A1: ");
    scanf("%f", &nota_a1);
    while(getchar() != '\n'); // limpar buffer

    printf("informe a nota A2: ");
    scanf("%f", &nota_a2);
    while(getchar() != '\n'); // limpar buffer

    printf("a1=%.2f e a2=%.2f\n", nota_a1, nota_a2);

    return 0;
}