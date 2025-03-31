#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include "product.h"
#include "../include/product.h"
#include "../include/cart.h"

int main(){
	/*
	Como a main é o entrypoint de toda a aplicação, eu não vejo o pq separar o menu. Talvez para evitar o uso dos printf, mas eu acredito que assim seja legível para outros devs também então vou deixar sem a função do menu.
	*/
	while (1) {
        printf("================ Bem-vindo(a) - Solução Mercado ===========\n");
        printf("1 - Cadastrar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Comprar produto\n");
        printf("4 - Visualizar carrinho\n");
        printf("5 - Fechar pedido\n");
        printf("6 - Sair do sistema\n");

        int opcao;
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: cadastrarProduto(); break;
            case 2: listarProdutos(); break;
            case 3: adicionarAoCarrinho(); break;
            case 4: visualizarCarrinho(); break;
            case 5: fecharPedido(); break;
            case 6: printf("Saindo...\n"); exit(0);
            default: printf("Opção inválida.\n"); sleep(2);
        }
    }
	return 0;
}