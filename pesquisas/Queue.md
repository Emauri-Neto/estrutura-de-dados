# Fila

A **fila** é uma estrutura de dados **linear fundamental**, que segue o princípio **FIFO (First-In, First-Out)**, ou seja, "Primeiro a Entrar, Primeiro a Sair". Isso significa que o primeiro elemento adicionado à fila será o primeiro a ser removido. Em uma fila, os elementos são **inseridos** na extremidade chamada de **traseira (rear ou tail)** e **removidos** da extremidade chamada de **frente (front ou head)**.

## Tipos de Filas

1. Simples

    A forma mais básica de fila, onde as operações ocorrem apenas nas extremidades.

    ```c
        [ A ] -> [ B ] -> [ C ] -> [ D ]
          ^                          ^
        Front                       Rear
    ```

2. Circular

    Quando a estrutura da fila é implementada de modo que o último elemento aponta para o primeiro, formando um círculo. Isso permite uma utilização mais eficiente do espaço.

    ```c
        [ A ] -> [ B ] -> [ C ]
          ^                 |
          |-----------------|
    ```

3. Prioridade

    Cada elemento possui uma prioridade, e a remoção ocorre com base na prioridade e não na ordem de inserção.

    > Aqui, Task2 será removido primeiro devido à maior prioridade, mesmo que tenha entrado depois.

    ```c
        [ Task1 (Low) ] -> [ Task2 (High) ] -> [ Task3 (Medium) ]
    ```

4. Duplamente Terminada

    Permite inserção e remoção de elementos tanto no início quanto no final da fila.

    ```c
        Front <-> [ A ] <-> [ B ] <-> [ C ] <-> Rear
    ```

## Vantagens

- Simples de entender e implementar.

- Útil para cenários onde a ordem cronológica é essencial.

## Desvantagens

- No caso de implementação com arrays, pode haver desperdício de memória.

- Acesso limitado apenas aos elementos nas extremidades.

## Fontes utilizadas

1. **"https://en.wikipedia.org/wiki/Queue_(abstract_data_type)"**
2. **"https://www.geeksforgeeks.org/queue-data-structure/"**