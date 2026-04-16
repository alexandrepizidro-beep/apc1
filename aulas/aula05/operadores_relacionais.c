#include<stdio.h>

int main() {

    int idade;

    printf("entre com a sua idade:  ");
    scanf("%i", &idade);
    while (getchar() != '\n');
    
    int e_menor_de_idade = idade < 18;
    int e_maior_de_idade = idade > 18;
    int e_idoso = idade >= 60;
    int e_debutante = idade == 15;
    int nao_e_debutante = idade !=15;

    //operadores relacionais

    // < menor que 
    // <= menor igual
    // > maior que 
    // >= maior ou igual 
    // == igual 
    // != diferenca
    // c nao tem verdadeiro e falso, so tem 0 = falso, 1 = verdadeiro

    printf("voce e menor de idade? %i\n", e_menor_de_idade);
    printf("voce e maior de idade? %i\n", e_maior_de_idade);
    printf("voce e idoso? %i\n", e_idoso);
    printf("voce e debutante? %i\n", e_debutante);
    printf("voce nao e debutante? %i\n", nao_e_debutante);
      
    return 0;
}