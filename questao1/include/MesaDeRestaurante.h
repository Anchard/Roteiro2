#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <Pedido.h>

class MesaDeRestaurante{
    public:
        Pedido listaPedidos[10];

        void adicionaAoPedido(Pedido pedido, int pos);
        void zeraPedidos();
        float calculaTotal();
        void show();
};

#endif // MESADERESTAURANTE_H
