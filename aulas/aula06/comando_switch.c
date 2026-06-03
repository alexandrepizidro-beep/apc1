#include <stdio.h>

int main () {

    int nota = 0;

    printf("Informe a nota de 1 a 5: ");
    scanf("%i", &nota);


    if(nota == 1) {
        printf("Voce ganhou uma estrela *\n");
    } else if(nota == 2) {
        printf("Voce ganhou duas estrelas **\n");
    } else if(nota == 3) {
        printf("Voce ganhou tres estrelas ***\n");
    } else if(nota == 4) {
        printf("Voce ganhou quatro estrelas ****\n");
    } else if(nota == 5) {
        printf("Voce ganhou cinco estrelas *****\n");
    } else {
        printf("Nota invalida! tente novamente.\n");
    }

    switch(nota) { // esse e o correto a se utilizar, faz a mesma coisa do de cima 
        case 1:printf("Voce ganhou uma estrela *\n");break;
        case 2:printf("Voce ganhou duas estrelas **\n");break;
        case 3:printf("Voce ganhou tres estrelas ***\n");break;
        case 4:printf("Voce ganhou quatro estrelas ****\n");break;
        case 5:printf("Voce ganhou cinco estrelas *****\n");break;
        default: printf("Nota invalida! tente novamente.\n");
    }
    
    return 0;
}