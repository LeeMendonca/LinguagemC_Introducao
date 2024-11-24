/******************************************************************************
Árvore de Natal <3
*******************************************************************************/
#include <stdio.h>

int main() {
    int h=0;
    
    printf("Digite a altura da árvore: ");
    scanf("%d", &h);
    
    for (int i=1; i<=h; i++) {
        
        for (int j=i; j<=h; j++) {
            printf(" ");
        }
        
        for (int k=1; k<=(2*i-1); k++) {
            if (k==1 && i==1)
                printf("★");
            else
                printf("*");
        }

        printf("\n");
    }

    for (int i=1; i<=h; i++)
        printf(" ");
    printf("█");

    return 0;
}
