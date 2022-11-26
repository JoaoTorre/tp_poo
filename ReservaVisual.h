//
// Created by joaog on 11/24/2022.
//

#ifndef TP_POO_RESERVAVISUAL_H
#define TP_POO_RESERVAVISUAL_H

#include <cstring>
#include <iostream>
#include <vector>
#include "ReservaGeral.h"

using namespace std;

class ReservaVisual: public ReservaGeral {


public:

    ReservaVisual();
    ~ReservaVisual();

    void criarReservaVisual();

    void mostraReservaVisual();

    void aumentaLinha(bool up);

    void aumentaColuna(bool right);

    void diminuiLinha(bool down);

    void diminuiColuna(bool left);




private:
    int linhasVisual{};
    int colunasVisual{};
    int linhaInicio{};
    int colunaInicio{};




};


#endif //TP_POO_RESERVAVISUAL_H
