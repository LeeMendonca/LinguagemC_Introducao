/******************************************************************************
2. Sequência: Imprima a sequência numérica dos valores em ordem crescente
iniciando em 1 até n, onde n é a variável que armazena um inteiro maior que 0,
digitado pelo usuário e define o número máximo da sequência. Empregar for.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=0, inicial=1, i, j; // não esqueça de inicializar i
    printf("Insira um valor inteiro: ");
    scanf("%d", &n);
    
    // sintaxe: for (inicialização; condição; incremento)
    
    for (i=1; i<=n; i++) // para cada linha de 1 até n
    { 
        for (j=1; j<=i; j++) // para imprimir i números na linha
            printf("%d", i);
        printf("\n");
    }
        
    return 0;
}
