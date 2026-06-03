#include <stdio.h>

int main() {

    unsigned char caracetere_sem_sinal; // sem sinal (- ou +)
    unsigned int inteiro_sem_sinal; // sem sinal

    // cpu com 64bits = 'long int' e igual ao 'int'
    // cpu com 32bits = 'long int' e igual ao 'long long int'

    short inteiro_curto;
    long long int inteiro_longo = 10LL; // precisa do LL no final do numero - por conta do CPU de 64 bits
    printf(" inteiro longo = %lli", longo duplo);


    long double duplo_longo = 1.1234567891012131415161718L; // capacidade para dezoito casa decimais
    printf("duplo longo = %Lf", longo duplo);


    printf("tamnho em bytes do 'char' = %u\n", sizeof(char)); // '%u" numero semsinal
    printf("tamanho em bytes do 'int' = %u\n", sizeof(int));
    printf("tamanho em bytes do 'float' = %u\n", sizeof(float));
    printf("tamanho em bytes do 'short int' = %u\n", sizeof(short int));
    printf("tamanho em bytes do 'long int' = %u\n", sizeof(long int));
    printf("tamanho em bytes do 'long long int' = %u\n", sizeof(long long int));
    printf("tamanho em bytes do 'double' = %u\n", sizeof(double));
    printf("tamanho em bytes do 'long double' = %u\n", sizeof(long double));


    return 0;
}