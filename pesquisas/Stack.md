# Pilha

Uma pilha é uma estrutura de **dados linear abstrata** que segue um princípio específico para a inserção e remoção de elementos. Esse princípio é conhecido como **LIFO (Last-In, First-Out)**, que significa "Último a Entrar, Primeiro a Sair".

- Inserção e remoção: Sempre realizadas no topo da pilha.

- Estrutura linear: Os elementos são organizados em sequência.

## Complexidade

> A complexidade foi baseada usando uma stack implementada com array

| Operação | Complexidade |
| -------- | ------------ |
| push     | O(1)         |
| pop      | O(1)         |
| peek     | O(1)         |
| isEmpty  | O(1)         |

## Vantagens

- Implementação simples.

- Operações rápidas e eficientes.

- Estrutura fundamental para diversos algoritmos.

## Desvantagens

- Acesso restrito: apenas ao elemento do topo.

- Risco de overflow (estouro) em implementações baseadas em array, caso o limite seja atingido.

- Risco de underflow (esvaziamento) ao tentar remover de uma pilha vazia.

## Fontes utilizadas

1. **"https://en.wikipedia.org/wiki/Stack_(abstract_data_type)"**
2. **"https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/"**