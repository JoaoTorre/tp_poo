//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#ifndef TP_POO_CENOURA_H
#define TP_POO_CENOURA_H

#include <string>
#include "Alimento.h"

class Cenoura:public Alimento {
public:
    Cenoura();
    ~Cenoura();
private:
    string cheiro = "verdura";
};


#endif //TP_POO_CENOURA_H
