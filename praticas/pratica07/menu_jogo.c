#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao = 0;
     do{
        system("clear");
        printf("MENU PRINCIPAL\n");
        printf("1 - Novo Jogo\n");
        printf("2 - Continuar jogo\n");
        printf("3 - Ver pontuação\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch (opcao){
            case 1: printf("Escolha seu ponto de partida\n"); break;
            case 2: printf("Seu ponto de partida e na caverna da maldição gelida\n"); break;
            case 3:printf("Sua pontuação e de 10.000 pontos, esta com 2%% do progresso total\n"); break;
            case 4: printf("Voce esta deixando a sua jornada, Ate logo guerreiro\n"); break;
            default:printf("Opção invalida, selecione novamente guerreiro\n"); break;
        }
        printf("Pressione X ou Enter para continuar...");
        getchar();

     }while (opcao != 4);

    return 0;
}