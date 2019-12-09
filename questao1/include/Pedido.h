#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido{
    private:
        string numero;
        string descricao;
        int quantidade;
        float preco;

    public:
        Pedido(string numero, string descricao, int quantidade, float preco){
            this->numero = numero;
            this->descricao = descricao;
            this->quantidade = quantidade;
            this->preco = preco;
        }

        Pedido(){
            this->numero = "0";
            this->descricao = "0";
            this->quantidade = 0;
            this->preco = 0;
        }

        void setNumero(string numero);
        void setDecricao(string descricao);
        void setQuantidade(int quantidade);
        void setPreco(float preco);

        string getNumero();
        string getDescricao();
        int getQuantidade();
        float getPreco();
};

#endif // PEDIDO_H
