#include "MesaDeRestaurante.h"
#include <iostream>

using namespace std;

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido, int pos){
    for(int i = 0; i < 10; i++){
        if(pedido.getNumero() == this->listaPedidos[i].getNumero()){
            this->listaPedidos[i].setQuantidade(this->listaPedidos[i].getQuantidade() + 1);

            cout << "Quantidade Acrescentada!\n\n";
            return;
        }
    }

    this->listaPedidos[pos].setNumero(pedido.getNumero());
    this->listaPedidos[pos].setDecricao(pedido.getDescricao());
    this->listaPedidos[pos].setQuantidade(pedido.getQuantidade());
    this->listaPedidos[pos].setPreco(pedido.getPreco());

    cout << "Pedido Adicionado:\n";
    cout << "Numero: " << this->listaPedidos[pos].getNumero() << endl;
    cout << "Descricao: " << this->listaPedidos[pos].getDescricao() << endl;
    cout << "Quantidade: " << this->listaPedidos[pos].getQuantidade() << endl;
    cout << "Preco: " << this->listaPedidos[pos].getPreco() << "\n\n";

}

void MesaDeRestaurante::zeraPedidos(){
    for(int i = 0; i < 10; i++){
        this->listaPedidos[i].setNumero("0");
        this->listaPedidos[i].setDecricao("0");
        this->listaPedidos[i].setQuantidade(0);
        this->listaPedidos[i].setPreco(0);
    }
    cout << "Pedidos Zerados!\n\n";
}

float MesaDeRestaurante::calculaTotal(){
    float sum = 0;

    for(int i = 0; i < 10; i++){
        sum += this->listaPedidos[i].getPreco() * this->listaPedidos[i].getQuantidade();
    }

    cout << "Total: " << sum << "\n\n";
    return sum;
}

void MesaDeRestaurante::show(){
    for(int i = 0; i < 10; i++){
        cout << "Pedido: " << i << endl;
        cout << "Numero: " << this->listaPedidos[i].getNumero() << endl;
        cout << "Descricao: " << this->listaPedidos[i].getDescricao() << endl;
        cout << "Quantidade: " << this->listaPedidos[i].getQuantidade() << endl;
        cout << "Preco: " << this->listaPedidos[i].getPreco() << "\n\n";
    }

}
