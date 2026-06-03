#include<stdio.h>

int main() {

    // constantes

    const float ICMS = 0.17f;
    const float ISS = 0.05f;
    const float PIS = 0.0165f;

    // entrada

    float valor_produto = 0.0f;

    printf("Entre com o valor do produto: R$ ");
    scanf("%f", &valor_produto);
    while(getchar() != '\n');

    // processamento

    float valor_icms = valor_produto * ICMS;
    float valor_iss = valor_produto * ISS;
    float valor_pis = valor_produto * PIS;

    float preco_final =
        (1 + ICMS + ISS + PIS) * valor_produto;

    // saida

    printf("=====================================\n");
    printf("      CALCULO DE IMPOSTOS\n");
    printf("=====================================\n");
    printf("Valor do produto:  R$ %.2f\n", valor_produto);
    printf("ICMS (17%%):       R$ %.2f\n", valor_icms);
    printf("ISS (5%%):         R$ %.2f\n", valor_iss);
    printf("PIS (1,65%%):      R$ %.2f\n", valor_pis);
    printf("-------------------------------------\n");
    printf("Preco final:       R$ %.2f\n", preco_final);

    return 0;
}