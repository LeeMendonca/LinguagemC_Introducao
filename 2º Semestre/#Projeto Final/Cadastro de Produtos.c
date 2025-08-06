#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

// Estrutura para armazenar dados de um produto
typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

// Estrutura para armazenar dados de um pedido
typedef struct {
    int id;
    Produto produtos[99];
    float total;
} Pedido;

// Função para salvar os dados do produto em um arquivo CSV
void cadastrarProduto(Produto produto) {
    FILE *arquivo = fopen("produtos.csv", "a"); // Abre em modo append
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar o produto.\n");
        return;
    }
    fprintf(arquivo, "%s,%.2f,%d\n", produto.nome, produto.preco, produto.quantidade);
    fclose(arquivo);
}

// Função para ler e exibir os dados dos produtos do arquivo CSV
void lerProdutos() {
    FILE *arquivo = fopen("produtos.csv", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura dos produtos.\n");
        return;
    }

    char nome[50];
    float preco;
    int quantidade;

    printf("\nLista de Produtos:\n");
    printf("=+=+=+=+=+=+=+=+=+=+=+=\n");
    while (fscanf(arquivo, "%49[^,],%f,%d\n", nome, &preco, &quantidade) != EOF) {
        printf("Produto: %s | Preço: %.2f | Quantidade: %d\n", nome, preco, quantidade);
    }

    fclose(arquivo);
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    Pedido pedidos[99];
    int id = 0, ativo = 1, c;

    while (ativo) {
        system("cls"); // Limpa a tela

        printf("1 - Novo pedido");
        printf("\n2 - Listar pedido(s)");
        printf("\n3 - Sair");
        printf("\nEscolha uma opção: ");
        int opcao;
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");

                printf("ID DO PEDIDO: %d", id + 1);
                printf("\n=+=+=+=+=+=+=+=+=+=+=+=+=+=+=");
                pedidos[id].id = id;
                float total = 0;

                for (int i = 0; i < 99; i++) {
                    while ((c = getchar()) != '\n' && c != EOF);

                    printf("\n#Produto %d", i + 1);

                    printf("\nDigite o nome do produto: ");
                    char nome[50];
                    fgets(nome, sizeof(nome), stdin);

                    printf("Digite o preço do produto: ");
                    float preco;
                    scanf("%f", &preco);

                    printf("Digite a quantidade do produto: ");
                    int quantidade;
                    scanf("%d", &quantidade);

                    Produto produto = {.preco = preco, .quantidade = quantidade};
                    strcpy(produto.nome, nome);

                    pedidos[id].produtos[i] = produto;

                    total += preco * quantidade;

                    cadastrarProduto(produto);

                    printf("\nDeseja adicionar outro produto? [s/n] ");
                    char novoProduto;
                    scanf(" %c", &novoProduto);

                    if (novoProduto != 's') {
                        break;
                    }

                    printf("-------------------------------------------");
                }

                pedidos[id].total = total;
                id++;
                break;

            case 2:
                system("cls");
                float totalGeral = 0;

                for (int i = 0; i < id; i++) {
                    if (i > 0) {
                        printf("\n");
                    }
                    printf("ID DO PEDIDO: %d", i + 1);
                    for (int j = 0; j < 99; j++) {
                        printf("\n----------------------------------");
                        printf("\n#Produto %d", j + 1);
                        printf("\nNome: %s", pedidos[i].produtos[j].nome);
                        printf("Preço: %.2f", pedidos[i].produtos[j].preco);
                        printf("\nQuantidade: %d", pedidos[i].produtos[j].quantidade);

                        if (pedidos[i].produtos[j + 1].quantidade == 0) {
                            break;
                        }
                    }

                    printf("\n==================================");
                    printf("\nTotal do pedido: %.2f", pedidos[i].total);
                    totalGeral += pedidos[i].total;
                    printf("\n==================================\n");
                }

                printf("\n- Total geral: %.2f\n", totalGeral);
                printf("\nPressione qualquer tecla para continuar...");
                while ((c = getchar()) != '\n' && c != EOF);
                getchar();
                break;

            case 3:
                ativo = 0;
                break;
        }
    }

    return 0;
}
