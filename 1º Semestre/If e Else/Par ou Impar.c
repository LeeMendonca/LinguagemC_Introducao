/*******************************************
8. Diga se o número digitado é par ou ímpar.
*******************************************/

#include <stdio.h>

int main()
{
    int n=0;
    
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    
    if ((n%2)==0)
        printf("É par!");
    else
        printf("É ímpar!");

    return 0;
}
