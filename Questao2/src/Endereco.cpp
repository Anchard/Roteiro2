#include "Endereco.h"
#include <iostream>

void Endereco::toString(){
    cout << "Estado: " << this->estado << endl;
    cout << "Cidade: " << this->cidade << endl;
    cout << "Bairro: " << this->bairro << endl;
    cout << "Rua: " << this->rua << endl;
    cout << "Numero: " << this->numero << endl;
    cout << "CEP: " << this->cep << "\n\n";
}
