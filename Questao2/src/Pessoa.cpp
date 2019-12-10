#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;

void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setEstado(string estado){
    this->endereco.estado = estado;
}

void Pessoa::setCidade(string cidade){
    this->endereco.cidade = cidade;
}

void Pessoa::setBairro(string bairro){
    this->endereco.bairro = bairro;
}

void Pessoa::setRua(string rua){
    this->endereco.rua = rua;
}

void Pessoa::setNumero(string numero){
    this->endereco.numero = numero;
}

void Pessoa::setCep(string cep){
    this->endereco.cep = cep;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getNome(){
    return this->nome;
}

string Pessoa::getEstado(){
    return this->endereco.estado;
}

string Pessoa::getCidade(){
    return this->endereco.cidade;
}

string Pessoa::getBairro(){
    return this->endereco.bairro;
}

string Pessoa::getRua(){
    return this->endereco.rua;
}

string Pessoa::getNumero(){
    return this->endereco.numero;
}

string Pessoa::getCep(){
    return this->endereco.cep;
}

string Pessoa::getTelefone(){
    return this->telefone;
}

void Pessoa::toString(){
    cout << "Estado: " << this->endereco.estado << endl;
    cout << "Cidade: " << this->endereco.cidade << endl;
    cout << "Bairro: " << this->endereco.bairro << endl;
    cout << "Rua: " << this->endereco.rua << endl;
    cout << "Numero: " << this->endereco.numero << endl;
    cout << "CEP: " << this->endereco.cep << endl;
}
