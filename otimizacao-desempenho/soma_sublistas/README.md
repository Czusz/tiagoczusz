# Algoritmo de Soma de Sublistas

Este é um exemplo de otimização do problema de soma de sublistas usando a técnica de "janela deslizante", que permite calcular a soma de sublistas de tamanho fixo de forma eficiente.

## Como funciona
1. A soma da primeira sublista de tamanho `k` é calculada.
2. A janela desliza para a direita, somando o novo elemento e subtraindo o elemento que sai da janela.
3. A complexidade do algoritmo é reduzida para O(n), onde n é o tamanho do vetor de entrada.

## Exemplos de Entrada e Saída
Entrada: `{2, 1, 5, 1, 3, 2}`, Tamanho da sublista: `3`
Saída: `Soma máxima de sublista de tamanho 3: 9`
