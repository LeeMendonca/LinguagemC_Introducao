#include <stdio.h>
#include <stdlib.h>

#define X "\033[1;34mX\033[0m"
#define O "\033[1;35mO\033[0m"

char T[3][3];
char jg = 'X';

void inicializar() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            T[i][j] = ' ';
    }
}

void exibir() {
    printf("JOGO DA VELHA\n\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (T[i][j] == 'X') {
                printf(" %s ", X);
            } else if (T[i][j] == 'O') {
                printf(" %s ", O);
            } else {
                printf(" %c ", T[i][j]);
            }
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

int verificar() {
    for (int i = 0; i < 3; i++) {
        if (T[i][0]==T[i][1] && T[i][1]==T[i][2] && T[i][0]!=' ')
            return 1;
    }
    
    for (int i = 0; i < 3; i++) {
        if (T[0][i]==T[1][i] && T[1][i]==T[2][i] && T[0][i]!=' ')
            return 1;
    }
    
    if (T[0][0]==T[1][1] && T[1][1]==T[2][2] && T[0][0]!=' ')
        return 1;
    if (T[0][2] == T[1][1] && T[1][1] == T[2][0] && T[0][2] != ' ')
        return 1;

    int cheio = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (T[i][j] == ' ')
                cheio = 0;
        }
    }
    if (cheio)
        return -1;
    
    return 0;
}

void jogada() {
    int lin = -1, col = -1;
    while (lin<0 || lin>2 || col<0 || col>2 || T[lin][col] != ' ') {
        printf("Jogador %c: ", jg);
        scanf("%d %d", &lin, &col);
        lin--;
        col--;
    }
    T[lin][col] = jg;
}

void alternar() {
    if (jg == 'X')
        jg = 'O';
    else
        jg = 'X';
}

int main() {
    int r = 0;
    inicializar();
    
    while (r==0) {
        system("clear");
        exibir();
        jogada();
        r = verificar();
        if (r==0)
            alternar();
    }
    system("clear");
    exibir();

    if (r==1)
        printf("Jogador %c venceu!\n", jg=='X' ? 'O' : 'X');
    else
        printf("Empate!\n");

    return 0;
}