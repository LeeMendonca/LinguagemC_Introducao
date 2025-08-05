#include <stdio.h>

int dobro (n);

int main () {

    int numero = 5;
    printf("Resultado: %d\n", dobro(numero));
    return 0;
}

int dobro (int n) {
    n = n * 5;
    return n;
}
