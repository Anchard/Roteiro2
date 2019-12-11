#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){
    //FIGURA GENERICA
    FiguraGeometrica f1("Generico", 10, 20);
    f1.calcularArea();

    //QUADRADO
    Quadrado q1("Quadrado", 20, 20);
    q1.calcularArea();

    //TRIANGULO
    Triangulo t1("Triangulo", 30, 12);
    t1.calcularArea();

    //CIRCULO
    Circulo c1("Circulo", 3.14, 10);
    c1.calcularArea();
    return 0;
}
