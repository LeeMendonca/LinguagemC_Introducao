/******************************************************************************
Questão 3: Analise as condições dentro do laço for.
Explique cada linha do código.
*******************************************************************************/
#include <stdio.h>

// Declaração da função Func, que recebe 3 inteiros.
int Func(int a, int b, int c);

int main()
{
    // Inicialização do array e das variáveis.
    int vetor[5], n1=0, x=0;
    
    // Laço for que inicializa o vetor inteiro com o valor 5.
    for (int i=0; i<5; i++)
        vetor[i] = 5;
    // O resultado do vetor[5] será {5, 5, 5, 5, 5}.
    
    // Laço for que soma todos os valores do vetor    
    for (int j=0; j<5; j++)
        n1 += vetor[j];
    /* n1 começa com 0, no primeiro loop armazena 5, depois 10, 15, 20, até 25
    no último loop, i.e., no final, n1 = 25. */
    
    // Chama a função Func, passando n1 = 25, vetor[0] = 5, vetor[4] = 5. 
    x = Func(n1, vetor[0], vetor[4]);
    // Obs: o 2º laço não interferiu no array.

    printf("Resultado: %d", x);
    return 0;
}
// Recebe a = 25, b = 5, c = 5; i.e., 25 + 5*5 =50.
int Func(int a, int b, int c) {
    return (a+b*c);
}
