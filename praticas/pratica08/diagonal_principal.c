#include<stdio.h> // matrizes

int main() {

    
    int tabela[3][3];
    printf("Preencha a tabela 3x3:\n");
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
    printf("Entre com a posicao [%i, %i]: ", i, j);
    scanf("%i", &tabela[i][j]);
    while(getchar() != '\n');
    }
    }

    printf("\nDiagonal principal:\n");

    for(int i = 0; i < 3; i++) {
    printf("%i\n", tabela[i][i]);
    }

    return 0;
}