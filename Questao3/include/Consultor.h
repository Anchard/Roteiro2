#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"

class Consultor: public Funcionario{
    public:
        void getSalario(float percentual);
};

#endif // CONSULTOR_H
