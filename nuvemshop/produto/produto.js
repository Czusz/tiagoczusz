// Simulação de criação de um produto na plataforma Nuvemshop
class Produto {
    constructor(nome, preco, descricao) {
        this.nome = nome;
        this.preco = preco;
        this.descricao = descricao;
    }

    adicionarCarrinho() {
        console.log(`Produto ${this.nome} adicionado ao carrinho por R$${this.preco}.`);
    }
}

// Criando um novo produto
const camiseta = new Produto("Camiseta Estilosa", 49.90, "Camiseta 100% algodão, conforto e estilo.");
camiseta.adicionarCarrinho();
