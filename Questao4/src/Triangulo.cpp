#include "Triangulo.h"
#include "FiguraGeometrica.h"
#include <iostream>

float Triangulo::calcularArea(){
    cout << "Area do " << this->nome << ": " << (this->operando1 * this->operando2)/2 << "\n\n";
    return (this->operando1 * this->operando2)/2;
}
