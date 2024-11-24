/******************************************************************************
2. Matriz - Imprimir pontas
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
            if (i==0 && j==0)
                m[i][j] = 1;
            else if (i==0 && j==n-1)
                m[i][j] = 1;
            else if (i==n-1 && j==0)
                m[i][j] = 1;
            else if (i==n-1 && j==n-1)
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
