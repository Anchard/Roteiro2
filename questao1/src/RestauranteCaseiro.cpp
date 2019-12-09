#include "RestauranteCaseiro.h"
#include <iostream>
#include <vector>

using namespace std;

float RestauranteCaseiro::calculaTotalRestaurante(){
    float sum = 0;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            sum += this->mesas[i].listaPedidos[j].getPreco() * this->mesas[i].listaPedidos[j].getQuantidade();
        }
    }

    cout << "Total: " << sum;
    return sum;
}

void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante mesa, int pos){
    this->mesas[pos] = mesa;

}
