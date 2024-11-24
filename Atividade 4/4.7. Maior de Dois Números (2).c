/******************************************
7. Descubra o maior de dois números e imprima
"Valores iguais" se as entradas forem as mesmas.
******************************************/

#include <stdio.h>

int main()
{
    int x=0, y=0; //Inicializando as variáveis para fins documentais.
    
    printf("Digite o valor de x e y: ");
    scanf("%d %d", &x, &y);
    
    if(x==y)
        printf("Valores iguais!");
    else if(x>y)
        printf("x é o maior!");
    else
        printf("y é o maior!");
    
    return 0;
}
