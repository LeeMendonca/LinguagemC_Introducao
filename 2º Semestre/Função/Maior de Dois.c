/******************************************************************************
Questão 4: Digite o código do programa conforme mostrado.
Faça a leitura de dois valores inteiros e analise o retorno da função Func
conforme as condições dadas.
*******************************************************************************/

// Inclui a biblioteca padrão para entrada e saída (necessária para printf e scanf)
#include <stdio.h>

// Protótipo da função Func, que recebe dois inteiros
int Func(int, int);

// Início da função principal, chamada pelo sistema operacional
int main()
{
    // Declaração das variáveis
    int n1, n2, x;
    
    // Entrada e recebimento de n1 e n2
    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    
    /* Chama a função Func, passando os valores fornecidos pelo usuário
    como argumentos e armazenando o resultado na variável x */
    x = Func(n1, n2);
    printf("%d", x);
    
    // Finaliza a função main, retornando zero para indicar o sucesso da execução
    return 0;
}

// Função que recebe dois inteiros n1 e n2
int Func(int n1, int n2) {
    
    // Se n1 for maior que n2, retorna a diferença entre eles
    if (n1>n2)
        return (n1-n2);
    else {
        
        // Se forem iguais, retorna a soma dos dois
        if (n1 == n2)
            return n1+n2;
        
        // Se n1 for menor que n2, retorna n1 + 5
        else
            return (n1+5);
    }
}