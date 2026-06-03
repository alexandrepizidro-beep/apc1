#include<stdio.h>

int main() {
    
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

    int numero_procurado = 0;

    printf("Qual numero deseja localizar: ");
    scanf("%i", &numero_procurado);
    while(getchar() != '\n');

   
    int numero_encontrado = 0;
    int posicao = -1;

    for(int i = 0; i < 10; i++) {
    int e_igual = numeros[i] == numero_procurado;
    if(e_igual) {
    numero_encontrado = 1;
    posicao = i;
    }
    }

    if(numero_encontrado) {
    printf("O numero %i foi encontrado na posicao [%i]\n", numero_procurado, posicao);
    } else {
    printf("O numero %i nao esta no vetor\n", numero_procurado);
    }


    return 0;
}