#include <stdio.h>

int main() {

    printf("===============================\n");
    printf("%25s\n", "N O T A  L E G A L");
    printf("===============================\n");
    printf("produto      Qtd     valor Unit\n");
    printf("%-12s %03i %14.2f\n", "camiseta", 2, 39.99f);
    printf("%-12s %03i %14.2f\n", "calca", 1, 89.90f);
    printf("%-12s %03i %14.2f\n", "Meia Social", 2, 19.99f);
    printf("===============================\n");
    printf("%-12s %18.2f\n", "Total",229.85f);

    return 0;
}
