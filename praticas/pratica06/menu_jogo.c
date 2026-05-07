#include <stdio.h>

int main() {

    int opcao = 0;

    printf("===== MENU DO JOGO =====\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuacao\n");
    printf("4 - Sair\n");

    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);

    switch(opcao) {

        case 1:printf("Novo jogo iniciado!\n");break;
        case 2:printf("Continuando jogo...\n");break;
        case 3:printf("Exibindo pontuacao...\n");break;
        case 4:printf("Saindo do jogo...\n");break;
        default:printf("Opcao invalida! tente novamente.\n");
    }

    return 0;
}