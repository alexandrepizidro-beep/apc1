#include<stdio.h> 

int main() {

    int quantidade = 0;

    printf("Entre com a quantidade de numeros desejada: ");
    scanf("%i", &quantidade);
    while(getchar() != '\n');

    int numeros[quantidade];
    int soma = 0;

    for(int i = 0; i < quantidade; i++) {
        printf("Entre com o numero [%i]: ", i);
        scanf("%i", &numeros[i]);
        while(getchar() != '\n'); 
        soma = soma + numeros[i];
    }
    float media_aritmetica = soma * 1.0f / quantidade;
    printf("Os numeros informados foram: \n");
    for(int i = 0; i < quantidade; i++) {
        printf("%i\n", numeros[i]);
    }
    
    printf("A soma dos numeros e %i\n", soma);
    printf("A media aritmetica e %.2f\n", media_aritmetica);

    return 0;
}