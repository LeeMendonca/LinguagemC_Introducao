/******************************************************************************
Questão 7: Crie uma struct em C para ler os dados de um aluno,
utilize vetor de struct para armazenar a lista de alunos e seus dados.
*******************************************************************************/
#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main() {
    Aluno alunos[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %s", alunos[i].nome); // lê string com espaço

        printf("Digite a matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a média: ");
        scanf("%f", &alunos[i].media);

        printf("\n");
    }
    
    printf("______________________________________________\n\n\n");
    printf("LISTA DE ALUNOS: \n");
    // Mostrando os dados
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %.2f\n\n", alunos[i].media);
    }

    return 0;
}
