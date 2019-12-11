#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo: public FiguraGeometrica{
    using FiguraGeometrica::FiguraGeometrica;
    public:
        float calcularArea();
};

#endif // CIRCULO_H
