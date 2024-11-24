/***************************************************
6. Dada uma temperatura em graus Celsius, converta em graus Fahrenheit.
Fórmula de conversão: F = (9*C + 160) / 5 
****************************************************/

#include <stdio.h>

int main()
{
    float C, F;
    
    printf("Digite a temperatura em graus C: ");
    scanf("%f", &C);
    
    F = (9*C + 160) / 5;
    
    printf("A temperatura em Fahrenheit é %.2fF", F);

    return 0;
}
