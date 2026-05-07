#include <stdio.h>

int main() {

    int idade = 0;

    printf("Informe a sua idade: ");
    scanf("%i", &idade);

    int e_crianca = idade >= 0 && idade <= 12;
    int e_adolescente = idade >= 13 && idade <= 17;
    int e_adulto = idade >= 18 && idade <= 64;
    int e_idoso = idade >= 65;

    if(e_crianca) {
        printf("Com %i anos voce e crianca\n", idade);
    } else if(e_adolescente) {
        printf("Com %i anos voce e adolescente\n", idade);
    } else if(e_adulto) {
        printf("Com %i anos voce e adulto\n", idade);
    } else if(e_idoso) {
        printf("Com %i anos voce e idoso\n", idade);
    } else {
        printf("Idade invalida\n");
    }

    return 0;
}