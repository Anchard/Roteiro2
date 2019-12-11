#include "Circulo.h"
#include <iostream>

float Circulo::calcularArea(){
    cout << "Area do " << this->nome <<": " << this->operando1 * (this->operando2 * this->operando2) << "\n\n";
    return this->operando1 * (this->operando2 * this->operando2);
}
