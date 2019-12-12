#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main(){
    Trabalhador t1("Lucas", 0);
    t1.calculaSalarioSemanal(1570);

    TrabalhadorPorHora t2("Thathiane", 0, 32);
    t2.calculaSalarioSemanal(50);

    TrabalhadorAssa1ariado t3("Gilcelia", 0);
    t3.calculaSalarioSemanal(1900);

    return 0;
}
