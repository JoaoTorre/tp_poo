//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#ifndef TP_POO_OVELHA_H
#define TP_POO_OVELHA_H

#include <string>
#include "Animal.h"

using namespace std;

class Ovelha:public Animal{
public:
    Ovelha(int peso);
    ~Ovelha();
private:
    int fome;
    const string alimento = "erva";
};

#endif //TP_POO_OVELHA_H
