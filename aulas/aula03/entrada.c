#include <stdio.h>

int main() {
    char tecla_pressionada;
    printf("pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() !='\n'); // limpar o buffer
    printf("voce pressionou a tecla '%c'\n", tecla_pressionada);

    int idade;
    printf("informe a sua idade: "); // apresentar o resultado em escrita 
    scanf("%i", &idade); // scnanf - analisar o dado 
    while(getchar() !='\n'); // limpar o buffer
    printf("voce tem %i anos\n", idade);


    float preco;
    printf("informe o preco da gasolina: ");
    scanf("%f", &preco);
    while(getchar() !='\n'); // limpar o buffer
    printf("o preco da gasolina e R$ %.2f\n", preco);
    

    return 0;
}