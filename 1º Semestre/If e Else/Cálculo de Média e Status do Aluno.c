/*****************************************************************
4. Média de 3 notas:
- Se maior que 9: "Aprovado com louvor, média: "
- Se entre 7-8.9: "Aprovado com mérito, média: "
- Se entre 5-6.9: "Aprovado, média: "
- Se menor que 4.9: "Reprovado, média: "
*****************************************************************/

#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    
    printf("Digita a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digita a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digita a 3ª nota: ");
    scanf("%f", &n3);
    
    media = (n1+n2+n3)/3;
    
    if (media<5)
        printf("Reprovado, média: %.1f", media);
    else if (media<7)
        printf("Aprovado, média: %.1f", media);
    else if (media<9)
        printf("Aprovado com mérito, média: %.1f", media);
    else if (media>=9)
        printf("Aprovado com louvor, média: %.1f", media);

    return 0;
}
