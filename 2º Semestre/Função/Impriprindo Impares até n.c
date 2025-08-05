/******************************************************************************
Questão 6: Crie uma função em C para imprimir todos os números ímpares de
1 até um número fornecido pelo usuário.
*******************************************************************************/
#include <stdio.h>

int NumerosImpares(int n);

int main() {
    
    int numero=0;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    NumerosImpares(numero);

    return 0;
}

int NumerosImpares(int n) {
    for (int i=1; i<=n; i++) {
        if (i%2!=0)
            printf("%d\n", i);
    }
    return 0;
}