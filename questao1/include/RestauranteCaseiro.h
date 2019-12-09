#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"
#include "Pedido.h"

class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesas[10];

    public:
        void adicionaMesa(MesaDeRestaurante mesa, int pos);
        float calculaTotalRestaurante();

};

#endif // RESTAURANTECASEIRO_H
