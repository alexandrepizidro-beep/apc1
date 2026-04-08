#include <stdio.h>

int main () {

    int idade;
    char sexo;
    float altura;
    float peso;


    printf("iforme a sua idade: ");
    scanf ("%i", &idade);
    while (getchar() != '\n');
    
    printf("informe o seu sexo (M ou F): ");
    scanf(" %c", &sexo);
    while (getchar() != '\n');

    printf("informe a sua altura (ex: 1.75): ");
    scanf("%f", &altura);
    while (getchar() != '\n');

    printf("informe o seu peso (ex: 72.825): ");
    scanf("%f", &peso);
    while (getchar() != '\n');

    printf("--- DADOS INFORMADOS ---\n");
    printf("idade: %i anos\n", idade);
    printf("sexo: %c\n", sexo);
    printf("altura: %.2f m\n", altura);
    printf("peso: %.3f kg\n", peso);
        

    return 0;
}