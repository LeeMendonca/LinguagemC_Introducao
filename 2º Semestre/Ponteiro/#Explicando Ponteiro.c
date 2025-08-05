/******************************************************************************
Ponteiro
*******************************************************************************/
#include <stdio.h>

int main()
{
    int *ptr; // aponta para um inteiro
    int numero = 25;
    
    // ptr aponta para o endereço de memória
    // *ptr aponta para a variável
    
    // o endereço do ponteiro recebe o endereço da variável
    ptr = &numero;
    
    // a variável recebe 24 através do ponteiro.
    *ptr = 24;
    
    printf("%d\n", *ptr);
    printf("%d", numero);

    return 0;
}
