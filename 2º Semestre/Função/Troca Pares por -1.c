/*Criar uma fun��o que troca todos os n�meros pares de um vetor pelo n�mero -1 */
#include <stdio.h>

void paresPorMenosUm(int *vetor) {

    for (int i=0; i< 5; i++) {
        if (vetor[i]%2 == 0) {
            vetor[i] = -1;
        }
    }
}

int main () {

    int multiplosDeCinco[5] = {5, 10, 15, 20, 25};
    paresPorMenosUm(multiplosDeCinco);

    for (int i=0; i<5; i++) {
        printf("%d ", multiplosDeCinco[i]);
    }

    return 0;
}
