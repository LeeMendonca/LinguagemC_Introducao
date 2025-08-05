/******************************************************************************
Função
*******************************************************************************/
#include <stdio.h>

int calcula_quadrado(int num); //protótipo da função

int main() {
    
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);
    int quad = calcula_quadrado(n1);
    printf("Quad = %d\n", quad);
    
    return 0;
}
//função que calcula o quadrado de um número
int calcula_quadrado(int num) {
    return num * num;
}