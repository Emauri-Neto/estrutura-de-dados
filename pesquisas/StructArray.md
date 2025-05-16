# Pesquisa sobre Array de Struct

> Para saber mais sobre os structs, vá para [Struct com Array](./StructWithArray.md).

## Array de Struct

Um array de struct é simplesmente um array onde cada elemento é uma variável do tipo struct previamente definido. Isso permite criar uma coleção de entidades similares, onde cada entidade possui os mesmos campos, mas com valores diferentes.

### Declaração

> A sintaxe para declarar um array de struct varia dependendo da linguagem de programação.

* **C:**
    ```c
    struct Pessoa pessoas[10]; // Declara um array de 10 structs do tipo Pessoa
    ```

### Acesso aos Membros

Para acessar os membros de uma struct dentro de um array, geralmente se usa o índice do array para acessar a struct específica e, em seguida, o operador de acesso ao membro (como `.` em C/C++) para acessar o campo desejado.

* **C/C++:**
    ```c++
    pessoas[0].nome = "João";
    int idadePrimeiraPessoa = pessoas[0].idade;
    ```

## Vantagens de Usar Array de Struct

* **Organização de Dados:** Permite agrupar dados relacionados de forma lógica e estruturada.
* **Facilidade de Acesso:** Simplifica o acesso a coleções de dados, utilizando índices.
* **Eficiência:** Em linguagens compiladas como C/C++, o acesso a elementos de um array é geralmente eficiente em termos de desempenho.
* **Representação de Coleções:** Ideal para representar listas de objetos com os mesmos atributos.

## Desvantagens e Considerações

* **Tamanho Fixo (em algumas linguagens):** Em algumas linguagens, o tamanho do array precisa ser definido na declaração e não pode ser alterado facilmente.
* **Alocação de Memória:** A alocação de memória para um array de struct ocorre de forma contígua, o que pode ser um problema se não houver espaço suficiente.
* **Alternativas:** Em algumas situações, outras estruturas de dados como listas dinâmicas, vetores (em C++ e outras linguagens) ou listas de objetos podem ser mais flexíveis.

## Aplicações Comuns

Arrays de struct são amplamente utilizados em diversas áreas da programação, incluindo:

* **Banco de Dados:** Representação de registros de tabelas.
* **Gráficos:** Armazenamento de vértices, arestas e outras primitivas geométricas.
* **Simulações:** Modelagem de coleções de entidades com múltiplos atributos.
* **Jogos:** Gerenciamento de objetos do jogo, como personagens, itens e inimigos.
* **Sistemas Embarcados:** Organização de dados de sensores e atuadores.