#include<stdio.h> // vetores

int main(){

    int numeros[10];

    numeros[0] = 5;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 7;
    numeros[4] = 0;
    numeros[5] = 6;
    numeros[6] = 4;
    numeros[7] = 8;
    numeros[8] = 9;
    numeros[9] = 1;

    for(int i = 0; i < 10; i++) {
        printf("%i\n", numeros[i]);
    }

    char nome[100]; // sabor string
    printf("Entre com seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Ola %s!\n", nome);
    
    float notas[3];
    for (int i = 0; i < 3; i++){
        printf("Entre com uma nota A%i: ", i+1);
        scanf("%f", &notas[i]);
    }
    printf ("Suas notas foram: ");
    for (int i = 0; i < 3; i++) {
        printf("A%i = %.1f, ", i+1, notas[i]);
    }
    printf("\n");


    return 0;
}