#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"
using namespace std;

int main(){
    //FUNCIONARIO
    Funcionario f1;
    f1.setNome("Joao");
    f1.setMatricula("11121113");
    f1.setSalario(3501.12);

    f1.show();

    //CONSULTOR
    Consultor c1;
    c1.setNome("Thathiane");
    c1.setMatricula("2016111222");
    c1.setSalario(1100.42);

    float pct;
    cout << "Digite a porcentagem desejada - 0.10, 0.15, 0.30...: ";
    cin >> pct;
    cout << endl;
    c1.show();
    c1.getSalario(pct);

    return 0;
}
