#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica{
    using FiguraGeometrica::FiguraGeometrica;
    public:
        float calcularArea();
};

#endif // TRIANGULO_H
