#include<stdio.h>
#include<math.h>

int main() {

//1. entrada

    int operador1;
    int operador2;

    printf("entre com um valor inteiro:  ");
    scanf("%i", &operador1);
    while (getchar() != '\n'); // limpa o burfer

    printf("entre com outro valor inteiro: ");
    scanf("%i",&operador2);
    while (getchar() != '\n'); // limpa o burfer

    //2. procesamento

    int soma = operador1 + operador2;
    int mutiplicacao = operador1 * operador2;
    int subtracao = operador1 - operador2;
    float divisao = operador1 * 1.0f / operador2; // modulo = resto da divisao
    int resto= operador1 % operador2; // modulo = resto da divisao

    //5 + 4 * 1 - 3 / 2

    int expressao = 5 + 4 * 1 - 3 / 2;


    // *funcoes matematicas *//

    double potencia = pow(operador1, operador2);
    double raiz_quadrada = sqrt(operador1);
    double logaritmo = log(operador1);
    double coseno = cos(operador1 * 3.14 / 180);
    // angulo em radiano = * PI / 180

    //3. saida

    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i * %i = %i\n", operador1, operador2, mutiplicacao);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i / %i = %.1f\n", operador1, operador2, divisao);
    printf("%i %% %i = %.2f\n", operador1, operador2, divisao);
    printf("%i ^ %i = %f\n", operador1, operador2, potencia);
    printf("²/%i = %f\n", operador1, raiz_quadrada);
    printf("log(%i) = %f\n", operador1, logaritmo);
    printf("cos(%i) =%f\n", operador1,coseno);
    printf("5 + 4 * 1 - 3 / 2 =%i\n", expressao);
    return 0;
    }