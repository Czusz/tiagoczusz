# Projeto de E-commerce - Nuvemshop

Este é um exemplo simples de como integrar um produto na plataforma Nuvemshop. O código simula a criação de um produto e sua adição ao carrinho.

## Como funciona
1. Um objeto `Produto` é criado com nome, preço e descrição.
2. O produto é adicionado ao carrinho com uma função que simula a operação.

## Exemplo de Uso
```javascript
const camiseta = new Produto("Camiseta Estilosa", 49.90, "Camiseta 100% algodão.");
camiseta.adicionarCarrinho();
```
Saída: `Produto Camiseta Estilosa adicionado ao carrinho por R$49.90.`
