#include <stdio.h>

int main() {

int dia = 0;

printf("Informe um numero de 1 a 7: ");
scanf("%i", &dia);

    switch (dia)
    {
    case 1:printf("O dia %i e final de semana\n", dia);break;
    case 2:printf("O dia %i e dia util\n", dia);break;
    case 3:printf("O dia %i e dia util\n", dia);break;
    case 4:printf("O dia %i e dia util\n", dia);break;
    case 5: printf("O dia %i e dia util\n", dia); break;
    case 6:printf("O dia %i e dia util\n", dia);break;
    case 7: printf("O dia %i e final de semana\n", dia); break;
    default:printf("Dia invalido! tente novamente.\n"); 
    }
    return 0;
}