#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"


class TrabalhadorPorHora: public Trabalhador{
    private:
        string nome;
        float salario;
        float valorDaHora;

    public:
        TrabalhadorPorHora(string nome, float salario, float valorDaHora): Trabalhador(nome, salario){
            this->nome = nome;
            this->salario = 0;
            this->valorDaHora = valorDaHora;
        }

        float calculaSalarioSemanal(int horas);

};

#endif // TRABALHADORPORHORA_H
