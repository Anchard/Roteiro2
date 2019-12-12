#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssa1ariado: public Trabalhador{
    private:
        string nome;
        float salario;

    public:
        TrabalhadorAssa1ariado(string nome, float salario): Trabalhador(nome, salario){
            this->nome = nome;
            this->salario = salario;
        }

};

#endif // TRABALHADORASSALARIADO_H
