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

        switch(opcao) {
        case 1:
        if(quantidade >= 10) {
        printf("Limite de obras atingido!\n");
        } else {
        achei = -1;
        do {
        printf("Entre com o codigo da obra: ");
        scanf("%i", &codigo);
        while(getchar() != '\n');

        if(codigo <= 0) {
        printf("Codigo invalido! O codigo deve ser maior que zero.\n");
            }
        } while(codigo <= 0);
        for(int i = 0; i < quantidade; i++) {
        if(obras[i].codigo == codigo) {
        achei = i; break;
            }
        }

        if(achei >= 0) {
        printf("Codigo ja cadastrado! Nao e permitido codigo duplicado.\n");
        } else {
        obras[quantidade].codigo = codigo;
        do {
        printf("Entre com o nome da obra: ");
        scanf("%[^\n]s", obras[quantidade].nome);
        while(getchar() != '\n');

        if(strlen(obras[quantidade].nome) == 0) {
        printf("Nome invalido! Tente novamente.\n");
            }
        } while(strlen(obras[quantidade].nome) == 0);
        do {
        printf("Entre com o endereco da obra: ");
        scanf("%[^\n]s", obras[quantidade].endereco);
        while(getchar() != '\n');

        if(strlen(obras[quantidade].endereco) == 0) {
        printf("Endereco invalido! Tente novamente.\n");
            }
        } while(strlen(obras[quantidade].endereco) == 0);
        do {
        printf("Entre com o responsavel pela obra: ");
        scanf("%[^\n]s", obras[quantidade].responsavel);
        while(getchar() != '\n');

        if(strlen(obras[quantidade].responsavel) == 0) {
        printf("Responsavel invalido! Tente novamente.\n");
            }
        } while(strlen(obras[quantidade].responsavel) == 0);
        do {
        printf("Entre com o valor da obra: ");
        scanf("%lf", &obras[quantidade].valor);
        while(getchar() != '\n');

        if(obras[quantidade].valor < 0) {
        printf("Valor invalido! O valor nao pode ser negativo.\n");
            }
        } while(obras[quantidade].valor < 0);
        do {
            printf("Status da obra:\n");
            printf("1 - Planejamento\n");
            printf("2 - Em andamento\n");
            printf("3 - Concluida\n");
            printf("4 - Paralisada\n");
            printf("Escolha o status => ");
            scanf("%i", &status);
            while(getchar() != '\n');

        if(status < 1 || status > 4) {
        printf("Status invalido! Tente novamente.\n");
            }
        } while(status < 1 || status > 4);
            obras[quantidade].status = status;
            quantidade++;
        printf("Obra cadastrada com sucesso!\n");
            }
        } break;

        case 2:
        if(quantidade == 0) {
        printf("Nenhuma obra cadastrada.\n");
        } else {
            printf("============================================================================================\n");
            printf("                                  LISTA DE OBRAS                                            \n");
            printf("============================================================================================\n");
            printf("%-8s %-20s %-20s %-20s %-12s %-20s\n", "CODIGO", "NOME", "ENDERECO", "RESPONSAVEL", "VALOR", "STATUS");
            printf("--------------------------------------------------------------------------------------------\n");

        for(int i = 0; i < quantidade; i++) {
        printf("%-8i %-20s %-20s %-20s ",
            obras[i].codigo,
            obras[i].nome,
            obras[i].endereco,
            obras[i].responsavel);

      if(obras[i].valor >= 1000000.0) {
        printf("R$ %.2f Milhoes ", obras[i].valor / 1000000.0);
    } else if(obras[i].valor >= 1000.0) {
        printf("R$ %.2f Mil ", obras[i].valor / 1000.0);
    } else {
        printf("R$ %.2f ", obras[i].valor);
    }

        switch(obras[i].status) {
        case planejamento:
        printf("Planejamento\n"); break;
        case andamento:
        printf("Em andamento\n"); break;
        case concluida:
        printf("Concluida\n"); break;
        case paralisada:
        printf("Paralisada\n"); break;
            }
        }
        printf("============================================================================================\n");
        } break;

        case 3:
        if(quantidade == 0) {
            printf("Nenhuma obra cadastrada para buscar.\n");
        } else {
        achei = -1;

        printf("Entre com o codigo da obra: ");
        scanf("%i", &codigo);
        while(getchar() != '\n');

        for(int i = 0; i < quantidade; i++) {
        if(obras[i].codigo == codigo) {
            achei = i; break;
            }
        }

        if(achei < 0) {
            printf("Nao achei a obra com codigo %i.\n", codigo);
        } else {
            printf("=============================================\n");
            printf("              OBRA ENCONTRADA               \n");
            printf("=============================================\n");
            printf("Codigo: %i\n", obras[achei].codigo);
            printf("Nome: %s\n", obras[achei].nome);
            printf("Endereco: %s\n", obras[achei].endereco);
            printf("Responsavel: %s\n", obras[achei].responsavel);

        

    return 0;
}