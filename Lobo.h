//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#ifndef TP_POO_LOBO_H
#define TP_POO_LOBO_H

#include <string>
#include "Animal.h"

using namespace std;

class Lobo:public Animal{
public:
    Lobo(int n);
    ~Lobo();
    int getRepLobo();
private:
    int fome;
    int RepLobo; //inicializar com valor entre 5 e 40, reproduzir quando VLobo for igual
    const string alimento = "carne";//cheiro de alimento
    //se estiver perto de animal ataca

};

#endif //TP_POO_LOBO_H
