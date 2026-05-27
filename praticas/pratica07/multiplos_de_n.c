#include <stdio.h>

int main() {

    int numero =0;

    printf("informe um numero inteiro: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

  printf("multiplos de %i no intervalo de 1 a 100\n", numero);

    for(int i = 1; i <= 100; i++) {
        int e_multiplo = i % numero == 0;
        if(e_multiplo) {  
        printf("%i\n", i);
        }
    }

    return 0;
}