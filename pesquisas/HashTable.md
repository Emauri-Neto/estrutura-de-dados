# Tabela Hash

Uma tabela hash é uma estrutura de dados que **mapeia chaves para valores**. Ela utiliza uma função de hash para **calcular um índice**, ou **hash code**, em um **array de "slots" ou "baldes"**, onde o valor correspondente é armazenado. O objetivo principal das tabelas hash é permitir uma **busca, inserção e exclusão** de dados muito eficientes, idealmente em **tempo constante (O(1))** em média.

## Componentes

- **Chave (Key):** Um identificador único para o dado que será armazenado.
- **Valor (Value):** O dado associado à chave.
- **Função de Hash (Hash Function):** Uma função que pega uma chave de entrada e a converte em um índice numérico dentro do array da tabela. Uma boa função de hash distribui as chaves uniformemente pelos baldes para minimizar colisões.
- **Array de Baldes (Buckets/Slots):** O array subjacente onde os pares chave-valor são armazenados. Cada posição no array é um balde.
- **Resolução de Colisões (Collision Resolution):** Métodos para lidar com a situação em que duas chaves diferentes são mapeadas para o mesmo índice pela função de hash.

## Vantagens

1. **Acesso Rápido:** Operações de inserção, remoção e busca têm, em média, complexidade O(1), ou seja, tempo constante.
2. **Flexibilidade:** Pode armazenar qualquer tipo de dado, desde que haja uma função hash apropriada.
3. **Eficiência em grandes volumes:** Mantém desempenho estável mesmo com grandes quantidades de dados, desde que bem dimensionada.

## Desvantagens

1. **Colisões:** Quando múltiplas chaves produzem o mesmo índice, requerem estratégias adicionais para resolução (como chaining ou open addressing), o que pode impactar o desempenho.
2. **Dependência da função hash:** Uma função hash mal projetada pode causar muitas colisões e prejudicar a eficiência.
3. **Uso de memória:** Em geral, necessita de mais memória do que outras estruturas como listas ou árvores, especialmente se for superdimensionada para reduzir colisões.
4. **Não ordenada:** Os elementos não são armazenados de forma ordenada, o que dificulta operações que exigem ordenação.

## Aplicações Práticas

- **Indexação em Banco de Dados:** Utilizada para otimizar buscas em bancos de dados, especialmente para índices secundários.
- **Compiladores:** Para armazenar e buscar identificadores de variáveis e funções na tabela de símbolos.
- **Sistemas de arquivos:** Em algumas implementações de sistemas de arquivos (por exemplo, ext3), tabelas hash são usadas para acelerar a busca por arquivos.
- **Sistemas de Cache:** Devido ao rápido tempo de acesso, é amplamente utilizada em sistemas de cache, como `memcached`.

## Fontes Utilizadas

1. **"https://www.geeksforgeeks.org/hash-table-data-structure/"**
2. **"https://en.wikipedia.org/wiki/Hash_table"**