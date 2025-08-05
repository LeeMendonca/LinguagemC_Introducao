/******************************************************************************
Questão 1: Analise o uso de struct e função.
Escreva o código à mão e anote qual será a saída exibida no console. 
Explique cada linha do código.
*******************************************************************************/
// Inclui a  biblioteca padrão de entrada e saída, permitindo o uso de funções como printf.
#include <stdio.h>

// Define um novo tipo de dado chamado pessoa, que é uma struct com três campos.
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função que recebe uma variável do tipo pessoa e imprime o peso com duas casas decimais.
void imprimePessoa(pessoa p) { // pessoa p é parâmetro da função, passado por valor.
    printf("Peso: %.2fkg", p.peso);
}

/* Função principal do programa.
O sistema operacional chama a função quando o programa é executado*/
int main () {
    
    /* Declara um array de 20 structs do tipo pessoa chamado pessoas,
    e uma variável individual p1. */ 
    pessoa pessoas[20], p1;
    
    /* Inicializa os campos da sexta posição do array pessoas (índice 5) 
    Ou seja, altera apenas a pessoa[5] do array de 20 pessoas. */
    pessoas[5].peso = 79.6;
    pessoas[5].idade = 45;
    pessoas[5].altura = 1.87;
    
    // Copia a struct pessoa[5] para a variável p1, sem modificar o array original.
    p1 = pessoas[5];
    
    // Incrementa a idade de p1 em 1 ano.
    p1.idade++;
    // Se a nova idade for maior que 40, acrescenta 5kg ao peso;
    if (p1.idade > 40) 
        p1.peso += 5.0;
    // Cenário: Daqui um ano, se essa pessoa tiver mais de 40, vai engordar 5kg.
    
    // Chama a função imprimePessoa, que imprime o peso da variável p1.
    imprimePessoa(p1);
    
    /*Finaliza a função main e retorna 0 ao sistema operacional,
    indicando que o programa terminou com sucesso. */
    return 0;   
}