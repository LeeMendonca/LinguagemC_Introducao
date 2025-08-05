/* Criar uma função que troca o maior número de um vetor por 1000 */

#include <stdio.h>

void maiorNumero (int *vetor) {

    int maior = vetor[0];

    for (int i=0; i<5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    for (int i=0; i<5; i++) {
        if (vetor [i] == maior) {
            vetor[i] = 1000;
        }
    }
}

int main () {

    int v[5] = {1, 2, 3, 4, 5};
    maiorNumero(v);

    for (int i=0; i<5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
