#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    enum status_obra_e {
        planejamento = 1,
        andamento = 2,
        concluida = 3,
        paralisada = 4
    };

    struct obra_t {
        int codigo;
        char nome[61];
        char endereco[101];
        char responsavel[61];
        double valor;
        enum status_obra_e status;
    };

    struct obra_t obras[10];

    int opcao = 0;
    int quantidade = 0;
    int codigo = 0;
    int achei = -1;
    int status = 0;

    do {
        system("clear");

        printf("=============================================\n");
        printf("        SISTEMA DE CADASTRO DE OBRAS         \n");
        printf("=============================================\n");
        printf("1 - Cadastrar obra\n");
        printf("2 - Listar obras\n");
        printf("3 - Buscar obra por codigo\n");
        printf("4 - Atualizar obra\n");
        printf("5 - Remover obra\n");
        printf("6 - Sair\n");
        printf("=============================================\n");
        printf("Escolha uma opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');



    return 0;
}