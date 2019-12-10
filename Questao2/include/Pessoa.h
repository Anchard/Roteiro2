#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <string>

class Pessoa{
    private:
        string nome;
        Endereco endereco;
        string telefone;

    public:
        Pessoa(string nome){
            this->nome = nome;
            this->telefone = "blank";
        }

        Pessoa(string nome, string estado, string cidade, string bairro, string rua, string numero, string cep, string telefone){
            this->nome = nome;
            this->endereco.estado = estado;
            this->endereco.cidade = cidade;
            this->endereco.bairro = bairro;
            this->endereco.rua = rua;
            this->endereco.numero = numero;
            this->endereco.cep = cep;
            this->telefone = telefone;
        }

        void setNome(string nome);
        void setEstado(string estado);
        void setCidade(string cidade);
        void setBairro(string bairro);
        void setRua(string rua);
        void setNumero(string numero);
        void setCep(string cep);
        void setTelefone(string telefone);

        string getNome();
        string getEstado();
        string getCidade();
        string getBairro();
        string getRua();
        string getNumero();
        string getCep();
        string getTelefone();

        void toString();
};

#endif // PESSOA_H
