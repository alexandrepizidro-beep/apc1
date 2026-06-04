#include<stdio.h>

int main() {

    // cria o tipo de contato
    struct contato_t {
        char nome[61];
        long long int telefone;
    };

    // cria o tipo ponto cartesiano
    struct ponto_cartesiano_t {
        int x;
        int y;
    };

    // cria o tipo aluno
    struct aluno_t {
        int matricula;
        char nome[60];
        char email[101];
        char nascimento[11];
    };

    // cria uma variavel do tipo contato
    struct contato_t contato;

    printf("entre com o nome do contato: ");
    scanf("%[^\n]s", contato.nome);
    while(getchar() != '\n');

    printf("entre com o telefone do contato: ");
    scanf("%lli", &contato.telefone);
    while(getchar() != '\n');

    printf("seu contato: %s - %lli\n", contato.nome, contato.telefone);

    // cria um vetor do tipo contato
    struct contato_t contatos[10];
    int quantidade = 0;

    // inclui o contato
    printf("entre com o nome do contato: ");
    scanf("%[^\n]s", contatos[quantidade].nome);
    while(getchar() != '\n');

    printf("entre com o telefone do contato: ");
    scanf("%lli", &contatos[quantidade].telefone);
    while(getchar() != '\n');
    quantidade++;

    // lista os contatos
    for(int i = 0; i < quantidade; i++) {
        printf("contato %i: %s - %lli\n", i + 1, contatos[i].nome, contatos[i].telefone);
    }

    // procurar contato
    int procurado = 0;
    int achei = -1;

    printf("entre com o numero do contato: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');

    for(int i = 0; i < quantidade; i++) {
        if(procurado == i + 1) {
            achei = i;
            break;
        }
    }

    if(achei < 0) {
        printf("nao achei o contato %i\n", procurado);
    } else {
        printf("achei o contato %i: %s - %lli\n", procurado, contatos[achei].nome, contatos[achei].telefone);
    }


    // alterar o contato
    procurado = 0;
    achei = -1;

    printf("entre com o numero do contato: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');

    for(int i = 0; i < quantidade; i++) {
        if(procurado == i + 1) {
            achei = i;
            break;
        }
    }

    if(achei < 0) {
        printf("nao achei o contato %i\n", procurado);
    } else {
       printf("entre com o novo contato: ");
    scanf("%[^\n]s", contatos[procurado].nome);
    while(getchar() != '\n');

    printf("entre com o novo telefone do contato: ");
    scanf("%lli", &contatos[procurado].telefone);
    while(getchar() != '\n');
    }



    // apagar contato 
    procurado = 0;
    achei = -1;

    printf("entre com o numero do contato: ");
    scanf("%i", &procurado);
    while(getchar() != '\n');

    for(int i = 0; i < quantidade; i++) {
        if(procurado == i + 1) {
            achei = i;
            break;
        }
    }

    if(achei < 0) {
        printf("nao achei o contato %i\n", procurado);
    } else {
        contato[procurado] = contatos[quantidade-1];
        quantidade --;
    }

    

    return 0;
}