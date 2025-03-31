/*
Essa diretiva define o struct de produto e suas funções relacionadas
*/

#ifndef PRODUCT_H
#define PRODUCT_H

#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char nome[30];
    float preco;
} Produto;

void infoProduto(Produto prod);
void cadastrarProduto();
void listarProdutos();
Produto pegarProdutoPorCodigo(int codigo);

#endif
