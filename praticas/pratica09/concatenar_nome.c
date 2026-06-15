#include <stdio.h>
#include <string.h>

int main() {

    char primeiro_nome[50];
    char ultimo_nome[50];
    char nome_completo[100];

    printf("Digite o seu primeiro nome: ");
    scanf("%s", primeiro_nome);
    while(getchar() != '\n');

    printf("Digite o seu ultimo nome: ");
    scanf("%s", ultimo_nome);
    while(getchar() != '\n');

    strcpy(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}