//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#ifndef TP_POO_RELVA_H
#define TP_POO_RELVA_H

#include <string>
#include "Alimento.h"

class Relva:public Alimento {
public:
    Relva();
    ~Relva();
private:
    string cheiro[2] = {"erva", "verdura"};
};


#endif //TP_POO_RELVA_H
