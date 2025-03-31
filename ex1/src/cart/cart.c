#include "../../include/cart.h"

static int contador_carrinho = 0;
static Carrinho carrinho[50];

void adicionarAoCarrinho() {
    if (contador_carrinho >= 50) {
        printf("Carrinho cheio!\n");
        return;
    }

    int codigo;
    printf("Informe o código do produto para adicionar ao carrinho: ");
    scanf("%d", &codigo);
    getchar();

    Produto p = pegarProdutoPorCodigo(codigo);
    if (p.codigo == 0) {
        printf("Produto não encontrado.\n");
        return;
    }

    int *retorno = temNoCarrinho(codigo);
    if (retorno[0] == 1) {
        carrinho[retorno[1]].quantidade++;
        printf("Aumentei a quantidade do produto %s já existente no carrinho.\n", strtok(carrinho[retorno[1]].produto.nome, "\n"));
    } else {
        carrinho[contador_carrinho].produto = p;
        carrinho[contador_carrinho].quantidade = 1;
        contador_carrinho++;
        printf("Produto %s adicionado ao carrinho.\n", strtok(p.nome, "\n"));
    }
}

void visualizarCarrinho() {
    if (contador_carrinho > 0) {
        printf("Produtos no Carrinho\n");
        printf("--------------------\n");
        for (int i = 0; i < contador_carrinho; i++) {
            infoProduto(carrinho[i].produto);
            printf("Quantidade: %d\n", carrinho[i].quantidade);
            printf("-----------------\n");
            sleep(1);
        }
    } else {
        printf("Carrinho vazio.\n");
    }
    sleep(2);
}

int *temNoCarrinho(int codigo) {
    static int retorno[] = {0, 0};
    for (int i = 0; i < contador_carrinho; i++) {
        if (carrinho[i].produto.codigo == codigo) {
            retorno[0] = 1;
            retorno[1] = i;
        }
    }
    return retorno;
}

void fecharPedido() {
    if (contador_carrinho > 0) {
        float valorTotal = 0.0;
        printf("Resumo do Pedido\n");
        printf("----------------\n");
        for (int i = 0; i < contador_carrinho; i++) {
            Produto p = carrinho[i].produto;
            int quantidade = carrinho[i].quantidade;
            valorTotal += p.preco * quantidade;
            infoProduto(p);
            printf("Quantidade: %d\n", quantidade);
            printf("---------------\n");
        }
        printf("Total: R$ %.2f\n", valorTotal);
        contador_carrinho = 0;
    } else {
        printf("Carrinho vazio.\n");
    }
    sleep(3);
}
