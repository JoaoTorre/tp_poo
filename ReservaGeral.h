#ifndef TP_POO_RESERVAGERAL_H
#define TP_POO_RESERVAGERAL_H

#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

class ReservaGeral {


public:
    ReservaGeral();

    ~ReservaGeral();

    void criarReservaGeral();

protected:

    int numeroLinhas{};
    int numeroColunas{};
    vector<vector<string>> grelhaGeral;

};


#endif //TP_POO_RESERVAGERAL_H


