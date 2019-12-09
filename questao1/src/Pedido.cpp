#include "Pedido.h"
#include <string>

using namespace std;

void Pedido::setNumero(string numero){
    this->numero = numero;
}

void Pedido::setDecricao(string descricao){
    this->descricao = descricao;
}

void Pedido::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Pedido::setPreco(float preco){
    this->preco = preco;
}

string Pedido::getNumero(){
    return this->numero;
}

string Pedido::getDescricao(){
    return this->descricao;
}

int Pedido::getQuantidade(){
    return this->quantidade;
}

float Pedido::getPreco(){
    return this->preco;
}
