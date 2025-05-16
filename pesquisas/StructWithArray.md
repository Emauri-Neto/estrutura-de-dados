# Pesquisa sobre Structs com Arrays

> Para saber mais sobre os arrays, vá para [Array de String](./StringArray.md).

## Structs: Agrupando Dados Relacionados

Uma **struct** (ou estrutura) é um tipo de dado composto que permite agrupar variáveis de diferentes tipos sob um único nome. Ela define um novo tipo de dado que representa uma entidade com múltiplos atributos. Cada variável dentro de uma struct é chamada de **membro** ou **campo**.

```c
struct Ponto {
    int x;  
    int y;
};
```

## Structs com Arrays

A combinação de structs com arrays permite criar coleções de dados complexos, onde cada elemento da coleção é uma estrutura contendo múltiplos campos. Isso é particularmente útil para representar listas de objetos com várias propriedades.

``` c
[{x: 1, y: 2}, {x: 5, y: -1}, {x: 0, y: 7} ]
```

Neste caso, temos um array onde cada elemento é uma struct do tipo `Ponto`. Podemos acessar os membros de cada struct utilizando o índice do array e o nome do membro da struct. Por exemplo, para acessar a coordenada `x` do segundo ponto (índice 1), utilizaríamos uma sintaxe como `array_de_pontos[1].x` (a sintaxe exata pode variar dependendo da linguagem de programação).

**Aplicações comuns de structs com arrays:**

* **Listas de registros:** Armazenar informações sobre clientes, produtos, alunos, etc., onde cada registro é uma struct e a lista de registros é um array.
* **Dados tabulares:** Representar tabelas de dados onde cada linha é uma struct e o conjunto de linhas é um array.
* **Conjuntos de objetos:** Agrupar objetos com características comuns, como uma lista de carros (onde cada carro tem marca, modelo, ano, etc. em uma struct).
* **Processamento gráfico:** Armazenar vértices de polígonos ou informações de pixels, onde cada vértice/pixel pode ser representado por uma struct contendo coordenadas, cores, etc.

## Vantagens de Utilizar Structs com Arrays

* **Organização de dados:** Permite agrupar dados relacionados de forma lógica e coerente.
* **Facilidade de acesso:** O acesso aos elementos individuais e aos membros das structs é eficiente através de índices e nomes de membros.
* **Reusabilidade de código:** A definição da struct pode ser reutilizada para criar múltiplos elementos no array.
* **Melhora na legibilidade:** O código se torna mais claro e fácil de entender ao representar entidades complexas com structs e coleções dessas entidades com arrays.

## Desvantagens de Utilizar Structs com Arrays

* **Tamanho fixo do array:** Em muitas linguagens, o tamanho do array precisa ser definido no momento da declaração. Para coleções de tamanho dinâmico, outras estruturas de dados como listas encadeadas ou vetores dinâmicos podem ser mais adequadas.
* **Gerenciamento de memória:** É importante gerenciar corretamente a memória alocada para o array, especialmente em linguagens que exigem alocação e desalocação manual.

## Fontes utilizadas

2.  **Documentações: "https://www.w3schools.com/c/c_structs.php"**