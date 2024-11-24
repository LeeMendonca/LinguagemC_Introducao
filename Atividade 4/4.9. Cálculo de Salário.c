/******************************************************************************
9. Cálculo de salário com bônus: Leia o salário de um funcionário e calcule o
novo salário com um bônus de 10% se o salário for inferior a R$1000,00.
Caso contrário, o bônus é de 5%.
*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario=0, bonus=0;
    printf("Informe seu salário base: R$ ");
    scanf("%f", &salario);
    
    if (salario<1000)
    {
        bonus = salario + (salario*0.1);
        printf("Seu salário será: R$%.2f", bonus);
    }
    
    else if (salario>1000)
    {
        bonus = salario + (salario*0.05);
        printf("Seu salário será: R$%.2f", bonus);
    }

    return 0;
}
