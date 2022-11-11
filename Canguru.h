//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#ifndef TP_POO_CANGURU_H
#define TP_POO_CANGURU_H

#include <string>
#include "Animal.h"


using namespace std;

class Canguru:public Animal{
public:
    Canguru();
    Canguru(int p);
    ~Canguru();
    int getIDProgenitor();
private:
    int IDProgenitor;
    bool bolsa;
};

#endif //TP_POO_CANGURU_H
