# Algoritmo de Busca Binária

Este é um exemplo de implementação do algoritmo de busca binária em C++. A busca binária é uma técnica eficiente para encontrar um elemento em uma lista ordenada.

## Como funciona
1. O algoritmo começa verificando o elemento do meio.
2. Se o elemento desejado for menor que o do meio, ele descarta a metade direita da lista.
3. Se for maior, ele descarta a metade esquerda.
4. Esse processo é repetido até o elemento ser encontrado ou até que o intervalo de busca seja inválido.

## Exemplos de Entrada e Saída
Entrada: `{1, 3, 5, 7, 9, 11}`, Elemento a ser buscado: `5`
Saída: `Elemento encontrado no índice 2`
