#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica{
    protected:
        string nome;
        float operando1;
        float operando2;

    public:
        FiguraGeometrica(string nome, float operando1, float operando2){
            this->nome = nome;
            this->operando1 = operando1;
            this->operando2 = operando2;
        }

        float calcularArea();

};

#endif // FIGURAGEOMETRICA_H
