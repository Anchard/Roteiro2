#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador{
    protected:
        string nome;
        float salario;

    public:
        Trabalhador(string nome, float salario){
            this->nome = nome;
            this->salario = salario;
        }

        float calculaSalarioSemanal(float mensal);
};

#endif // TRABALHADOR_H
