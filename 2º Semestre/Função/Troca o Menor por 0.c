/* Criar uma função que troca o menor número de um vetor por 0 */

#include <stdio.h>

void menorNumero (int *vetor) {

    int menor = vetor[0];

    for (int i=0; i<5; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    for (int i=0; i<5; i++) {
        if (vetor [i] == menor) {
            vetor[i] = 0;
        }
    }
}

int main () {

    int v[5] = {1, 2, 3, 4, 5};
    menorNumero(v);

    for (int i=0; i<5; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
