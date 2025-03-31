/*
Essa diretiva define o struct de carrinho e suas funções relacionadas
*/

#ifndef CART_H
#define CART_H

#include "product.h"

typedef struct {
    Produto produto;
    int quantidade;
} Carrinho;

void adicionarAoCarrinho();
void visualizarCarrinho();
int *temNoCarrinho(int codigo);
void fecharPedido();

#endif