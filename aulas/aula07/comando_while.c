#include <stdio.h>

int main () {

    int numero =0; //while e para saber quantas vezes vai repetir

    printf(" entre com um numero de 1 a 10: ");
    scanf("%i", &numero);
    while(getchar() !='\n');
    
    while(numero < 1 || numero >10){
        printf("Numero Invalido! Tente Novamente.\n");
        scanf("%i", &numero);
        while(getchar() !='\n');

    }
return 0;
}