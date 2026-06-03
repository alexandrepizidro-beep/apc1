#include<stdio.h>

int main() {

    
    float nota_a1[10];
    float nota_a2[10];

    for(int i = 0; i < 10; i++) {
    printf("Aluno %i\n", i + 1);
    printf("Entre com a nota A1: ");
    scanf("%f", &nota_a1[i]);
    while(getchar() != '\n');

    printf("Entre com a nota A2: ");
    scanf("%f", &nota_a2[i]);
    while(getchar() != '\n');

    printf("\n");
    }

    float media[10];
    for(int i = 0; i < 10; i++) {
    media[i] = (nota_a1[i] + nota_a2[i]) / 2.0f;
    }

    
    printf("=====================================================\n");
    printf("                    BOLETIM                          \n");
    printf("=====================================================\n");
    printf("ALUNO      A1       A2      MEDIA\n");

    for(int i = 0; i < 10; i++) {
    printf("%2i %5.1f %5.1f %5.1f\n", i + 1, nota_a1[i], nota_a2[i], media[i]);
    }


    return 0;
}