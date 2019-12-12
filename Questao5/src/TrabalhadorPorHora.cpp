#include "TrabalhadorPorHora.h"
#include <iostream>

float TrabalhadorPorHora::calculaSalarioSemanal(int horas){
    float salarioMensal;
    int excedente;

    if(horas > 40){
        excedente = horas - 40;
        salarioMensal = (excedente * (this->valorDaHora + valorDaHora/2)) + (this->valorDaHora * 40);
        cout << "Expectativa de Salario Semanal de " << this->nome <<": " << " R$ "<< this->valorDaHora * float(horas/4) << "\n";
        cout << "Expectativa de Salario Mensal de " << this->nome <<": " << " R$ "<< salarioMensal << "\n\n";
        return salarioMensal;
    }

    else{
        salarioMensal = this->valorDaHora * horas;
        cout << "Expectativa de Salario Semanal de " << this->nome <<": " << " R$ "<< this->valorDaHora * float(horas/4) << "\n";
        cout << "Expectativa de Salario Mensal de " << this->nome <<": " << " R$ "<< salarioMensal << "\n\n";
        return salarioMensal;
    }

}
