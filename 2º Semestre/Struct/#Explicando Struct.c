/******************************************************************************
Exemplo simples de struct
*******************************************************************************/
#include <stdio.h>

// um objeto é tratado como um "tipo de dado" em qualquer linguagem de programação.

struct Pessoa { // parecido com objeto em Java, mas não admite métodos.
    double peso;
    int idade;
    double altura;
};

void Imprimir(struct Pessoa p) {// Pessoa é o "tipo de dado", na prática.
    printf("Peso: %.2f\n", p.peso); // parâmetro.atributo.
    printf("Idade: %d\n", p.idade);
    printf("Altura: %.2f\n", p.altura);
}

int main() {
    struct Pessoa p1;
    p1.peso = 65.5;
    p1.idade = 21;
    p1.altura = 1.58;
    Imprimir(p1);

    return 0;
}