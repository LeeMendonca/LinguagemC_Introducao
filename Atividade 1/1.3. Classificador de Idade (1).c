/******************************************************************************
3. Classificador de Idade: Crie um programa que leia a idade de uma pessoa e
classifique-a em diferentes categorias:
- Criança: 0-12 anos
- Adolescente: 13-17 anos
- Adulto: 18-64 anos
- Idoso: 65+ anos
O programa deve continuar pedindo idades e classifcações até que o usuário insira
um valor negativo para encerrar.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int idade=0;
    
    while (idade>=0)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        if (idade<0)
            break;
        else if (idade<13)
            printf("Categoria: Criança\n\n");
        else if (idade<18)
            printf("Categoria: Adolescente\n\n");
        else if (idade<65)
            printf("Categoria: Adulto\n\n");
        else
            printf("Categoria: Idoso\n\n");
    }

    return 0;
}
