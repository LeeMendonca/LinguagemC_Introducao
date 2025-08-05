/******************************************************************************
3. Faça um programa que calcule e imprima o menor de três números.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Digite três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>n2 && n1>n3)
        printf("%d é maior!", n1);
    else if (n2>n1 && n2>n3)
        printf("%d é maior!", n2);
    else
        printf("%d é maior!", n3);

    return 0;
}
