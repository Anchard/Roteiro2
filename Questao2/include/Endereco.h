#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco{
    public:
        string estado;
        string cidade;
        string bairro;
        string rua;
        string numero;
        string cep;

        Endereco(string estado, string cidade, string bairro, string rua, string numero, string cep){
            this->estado = estado;
            this->cidade = cidade;
            this->bairro = bairro;
            this->rua = rua;
            this->numero = numero;
            this->cep = cep;
        }

        Endereco(){
            this->estado = "blank";
            this->cidade = "blank";
            this->bairro = "blank";
            this->rua = "blank";
            this->numero = "blank";
            this->cep = "blank";
        }

        void toString();
};

#endif // ENDERECO_H
