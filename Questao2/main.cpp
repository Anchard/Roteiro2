#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

    //Metodo 1
    Pessoa p1("Lucas");
    cout << "Nome: " << p1.getNome() << endl;
    p1.toString();
    cout << "Telefone: " << p1.getTelefone() << "\n\n";

    //Metodo 2
    Pessoa p2("Thathi", "PB", "JP", "Torre", "Geminiano da Franca", "222", "58040-500", "(83)9 9999-9999");
    cout << "Nome: " << p2.getNome() << endl;
    p2.toString();
    cout << "Telefone: " << p2.getTelefone() << "\n\n";

    //SETTERS
    p2.setBairro("Mangabeira 7");
    p2.setRua("Marizete Nascimento");
    p2.setNumero("123");
    p2.setCep("58058-000");

    cout << "Nome: " << p2.getNome() << endl;
    p2.toString();
    cout << "Telefone: " << p2.getTelefone() << "\n\n";

    return 0;
}
