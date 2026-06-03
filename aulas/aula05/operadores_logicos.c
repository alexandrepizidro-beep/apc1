#include<stdio.h>

int main() {

    int idade;

    printf("entre com a sua idade do cidadao: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

// operadores logicos 
// E - && - falso e qualquer outra coisa = falso
// OU - || - verdadeiro OU qualquer coisa = verdadiero 
// NAO - ! - NAO verdadeiro = falso, Nao falso = verdardeiro
// 1 verdadeiro
// 0 falso 


    int e_obrigado_votar = idade >= 18 && idade <=70;
    int e_facultativo_votar = (idade >= 16 && idade < 18) || idade >70;
    int nao_e_obrigado_votar = !e_obrigado_votar;


    printf("voce tem %i anos e deve votar? %i\n", idade, e_obrigado_votar);
    printf("voce tem %i anos e pode votar? %i\n", idade, e_facultativo_votar);
    printf("voce tem %i anos nao e obrigatorio votar %i\n", nao_e_obrigado_votar);

    
    return 0;
}