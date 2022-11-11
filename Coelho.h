//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#ifndef TP_POO_COELHO_H
#define TP_POO_COELHO_H

#include <string>
#include "Animal.h"

using namespace std;

class Coelho:public Animal{
public:
    Coelho(int peso);
    ~Coelho();
private:
    int fome;
    const string alimento = "verdura";
};

#endif //TP_POO_COELHO_H
