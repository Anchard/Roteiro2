#include "Funcionario.h"
#include <string>
#include <iostream>

using namespace std;

void Funcionario::setMatricula(string matricula){
    this->matricula = matricula;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}

string Funcionario::getMatricula(){
    return this->matricula;
}

string Funcionario::getNome(){
    return this->nome;
}

float Funcionario::getSalario(){
    return this->salario;
}

void Funcionario::show(){
    cout << "Matricula: " << this->matricula << endl;
    cout << "Nome: " << this->nome << endl;
    cout << "Salario: " << this->salario << "\n\n";
}
