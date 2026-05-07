#include <stdio.h>

int main() {

    int numero = 0;

    printf("Informe um numero: ");
    scanf("%i", &numero);

    int e_par = numero %2 == 0;
    
    if(e_par){
        printf("O numero %i e par\n", numero);
       }else{
        printf("o numero %i e impar\n", numero);
       }
    return 0;
}