# Listas

> Para falarmos de listas, é necessário ter o conceito de array bem estruturado, uma vez que eles são extremamente semelhantes, diferenciando-se apenas em alguns detalhes. Para saber mais sobre arrays, consulte [Array de String](./StringArray.md).

## Lista Encadeada

Uma **lista encadeada** é uma estrutura de dados linear que, ao contrário dos arrays, **não armazena elementos em locais de memória contíguos**. Em vez disso, **cada elemento (chamado de nó)** contém seus próprios dados e **uma referência (ou ponteiro)** para o próximo nó na sequência. Essa característica permite que os elementos sejam espalhados pela memória, tornando a **inserção e remoção** de elementos muito eficientes, pois não é necessário deslocar outros elementos.

### Tipos de Listas

1. Lista Encadeada Simples

    Cada nó possui um único ponteiro que aponta para o próximo nó da lista. A travessia ocorre em apenas uma direção.

    ```c
        [Data|Next] -> [Data|Next] -> [Data|Next] -> NULL
    ```

2. Lista Encadeada Duplamente Ligada

    Cada nó contém dois ponteiros: um para o próximo nó e outro para o nó anterior, permitindo a travessia em ambas as direções.

    ```c
        NULL <- [Prev|Data|Next] <-> [Prev|Data|Next] <-> [Prev|Data|Next] -> NULL
    ```
3. Lista Encadeada Circular

    O último nó da lista aponta para o primeiro nó, formando um ciclo. Pode ser simples ou duplamente ligada.

    ```c
        [Data|Next] -> [Data|Next] -> [Data|Next] --+
        ^                                           |
        |-------------------------------------------|
    ```

### Declaração

A estrutura de um nó em uma **lista encadeada simples** seria:

```c
struct Node {
    int data;
    struct Node* next;
};
```

## Vantagens

- Inserção e remoção de elementos eficientes, especialmente em listas grandes.

- Não exige conhecimento prévio do número de elementos.

## Desvantagens

- Acesso sequencial: não é possível acessar diretamente um elemento via índice.

- Overhead de memória: cada nó precisa armazenar um ou mais ponteiros.

## Diferenças entre Arrays e Listas Encadeadas


| **Aspecto**         | **Linked List**             | **Array**            |
| ------------------- | --------------------------- | -------------------- |
| Acesso              | Sequencial                  | Aleatório            |
| Inserção/Remoção    | Eficiente                   | Custosa              |
| Alocação de memória | Dinâmica                    | Estática ou dinâmica |
| Overhead de memória | Mais (devido aos ponteiros) | Menos                |

## Complexidade das operações

| **Operação**       | **Complexidade** |
| ------------------ | ---------------- |
| Inserção no início | O(1)             |
| Inserção no fim    | O(n)             |
| Remoção            | O(n)             |
| Busca              | O(n)             |

## Fontes utilizadas

1. **"https://www.geeksforgeeks.org/linked-list-data-structure/"**
