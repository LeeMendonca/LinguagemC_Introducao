/******************************************************************************
Ponteiro
*******************************************************************************/
#include <stdio.h>

int dobro(int *p);

int main() {
    int numero = 5;
    dobro(&numero);
    printf("Resultado: %d\n", numero);
    return 0;
}

int dobro(int *p) {
    *p = *p * 5;
}
