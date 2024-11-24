/******************************************************************************
1. Matriz - Imprimir diagonal principal
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    int m[n][n];
    
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i==j)
                m[i][j] = 1;
            else
                m[i][j] = 0;
        }
    }
    
     for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}
