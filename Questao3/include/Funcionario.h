#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario{
    protected:
        string matricula;
        string nome;
        float salario;

    public:
        void setMatricula(string matricula);
        void setNome(string nome);
        void setSalario(float salario);

        string getMatricula();
        string getNome();
        float getSalario();

        void show();

};

#endif // FUNCIONARIO_H
