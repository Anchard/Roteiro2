#include <iostream>
#include <Pedido.h>
#include <MesaDeRestaurante.h>
#include <RestauranteCaseiro.h>
#include <string>

using namespace std;

int main()
{
    Pedido p1("1", "saboroso", 1, 10);
    Pedido p2("2", "gostoso", 1, 23);
    Pedido p3("3", "delicioso", 2, 40);
    Pedido p4("1", "saboroso", 1, 10);
    Pedido p5("4", "apimentado", 3, 15);
    Pedido p6("5", "docinho", 1, 10);

    MesaDeRestaurante m1;

    m1.adicionaAoPedido(p1, 0);
    m1.adicionaAoPedido(p4, 1);
    m1.show();
    m1.calculaTotal();
    m1.zeraPedidos();
    m1.show();
    //Primeira mesa pedidos zerados

    MesaDeRestaurante m2;
    m2.adicionaAoPedido(p2, 0);
    m2.adicionaAoPedido(p3, 1);

    MesaDeRestaurante m3;
    m3.adicionaAoPedido(p5, 0);
    m3.adicionaAoPedido(p6, 1);

    //Adicionando as Mesas ao Restaurante
    RestauranteCaseiro r;
    r.adicionaMesa(m1, 0);
    r.adicionaMesa(m2, 1);
    r.adicionaMesa(m3, 2);

    //Calculando o preco de todas as Mesas
    r.calculaTotalRestaurante();

    return 0;
}
