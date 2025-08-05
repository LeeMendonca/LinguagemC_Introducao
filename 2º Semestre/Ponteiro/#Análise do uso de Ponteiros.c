/******************************************************************************
Questão 2: Analise o uso de ponteiros e a função 'dobro'.
Escreva o código à mão e anote qual será a saída exibida no console.
*******************************************************************************/
#include <stdio.h>

// Declaração da função dobro que recebe um ponteiro para inteiro.
/* Essa linha é um protótipo da função, permitindo que o main a chame
mesmo que sua definição esteja abaixo. */
int dobro (int *p);

int main() {
    
    // Inicializa a variável com valor 5.
    int numero = 5;
    
    /* Chama a função dobro, passando o endereço de memória de 'numero' com '&numero'.
    Isso permite que a função altere o valor de 'numero' diretamente.
    */
    dobro(&numero);
    printf("Resultado: %d", numero);

    return 0;
}
/* Definição da função dobro, que recebe um ponteiro p e acessa diretamente o
valor apontado pelo endereço fornecido, multiplicando-o por 5.*/
int dobro(int *p) {
    *p *= 5;
}
/* Obs: uma função int exige retorno, mas nesse caso, o ponteiro altera a memória
diretamente, por isso a função funciona sem retorno, mas está tecnicamente errada.*/