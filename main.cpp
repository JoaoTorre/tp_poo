//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "ReservaVisual.h"

using namespace std;

int main() {

    auto *reservaprimaria = new ReservaVisual();
    reservaprimaria->criarReservaGeral();
    reservaprimaria->criarReservaVisual();
    string movimento, opcao;
    while (true) {
        cin >> opcao;
        if (opcao == "slide") {
            cin >> movimento;
            if (movimento == "up") {
                reservaprimaria->aumentaLinha(true);
            }
            if (movimento == "down") {
                reservaprimaria->diminuiLinha(true);
            }
            if (movimento == "right") {
                reservaprimaria->aumentaColuna(true);
            }
            if (movimento == "left") {
                reservaprimaria->diminuiColuna(true);
            }

            if (opcao == "exit"){
               return 0;
            }
        }
    }


    }
