#include "Trabalhador.h"
#include <iostream>

float Trabalhador::calculaSalarioSemanal(float mensal){
    cout << "Salario semanal de " << this->nome <<": " << " R$ "<< mensal/4 << endl;
    cout << "Salario mensal de " << this->nome <<": " << " R$ "<< mensal << "\n\n";
    return mensal;
}
