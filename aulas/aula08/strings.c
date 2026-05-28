#include<stdio.h> // sabor strings
#include<string.h>

int main(){

    char texto[11];
    texto[0] = 'a';
    texto[1] = 'l';
    texto[2] = 'o';
    texto[3] = ' ';
    texto[4] = 'p';
    texto[5] = 'e';
    texto[6] = 's';
    texto[7] = 's';
    texto[8] = 'o';
    texto[9] = 'a';
    texto[10] = 'l';

    printf("%s\n", texto);

    strcpy(texto, "bom");
    printf("%s\n", texto); 

    for(int i=0; i < 11; i++) {
        printf("%c", texto[i]);
    }
    printf("\n");

    //concatenar a string

    strcat(texto, " dia"); // texto = texto + dia ;
    printf("%s\n", texto);

    // tamanho da string

    int tamanho = strlen(texto);
    printf("o texto '%s' tem %i caracteres\n", texto, tamanho);
    int capacidade = sizeof(texto);
    printf("o texto guarda ate %i caracteres\n", capacidade);

    // preencher string com um caractere

    memset(texto, 'a', 8);
    printf("%s\n", texto);

    //limpar string
    memset(texto, '\0', capacidade);
    printf("%s\n", texto);

    // string > outra, string = outra

    int compara = strcmp("laranja", "banana"); // < 0 a ordem e antes
    printf("cmpara laranja com banana = %i\n", compara);
    compara = strcmp("banana", "laranja"); // > 0 a ordem e depois 
    printf("cmpara banana com laranja = %i\n", compara);
    compara = strcmp("banana", "banana"); // 0 = sao iguais 
    printf("cmpara banana com banana = %i\n", compara);
    compara = strcmp("banana", "BANANA"); // 0 = sao iguais 
    printf("cmpara banana com BANANA = %i\n", compara); // > 0 = maiusculo e na frente de minusculo 


// procura um caracter no texto = string 
    char *tem_letra_a = strchr("sergipe", 'a');
    printf(" sergipe tem a letra 'a' %s\n", tem_letra_a);
    tem_letra_a = strchr("roraima", 'a');
    printf(" roraima tem a letra 'a' %s\n", tem_letra_a);

// procurar uma string na string 

    char *tem_silva = strstr("joao da silva neto", "silva");
    printf("'joao da silva neto' tem 'silva'? %s\n", tem_silva);
    tem_silva = strstr("joao da silva neto", "silva");
    printf("'jose de sousa' tem 'silva'? %s\n", tem_silva);
    

    return 0;
}