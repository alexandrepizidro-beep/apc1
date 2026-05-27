#include<stdio.h>

int main() {

    
    float nota = 0.0f;

    do {
    printf("entre com uma nota no sistema de 0 a 10: ");
    scanf("%f", &nota);
    while(getchar() != '\n');
    
    int nota_invalida = nota < 0 || nota > 10;
    if(nota_invalida) {
            printf("nota invalida.\n");
        }
    } while(nota < 0 || nota > 10);
    printf("a nota informada foi %.1f\n", nota);

    return 0;
}