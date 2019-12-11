#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>

void Consultor::getSalario(float percentual){
    cout << "Aumento de " << percentual * 100 << "%" << endl;
    cout << "Total: " << this->salario + this->salario * percentual << "\n\n";
    this->salario = this->salario + this->salario * percentual;
}
