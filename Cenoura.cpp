//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#include <iostream>
#include "Cenoura.h"

using namespace std;

Cenoura::Cenoura() {
    setSimbolo('t');
    setVida(0);//até ser comida
    setNutritivo(4);
    setToxicidade(0);//+1 a cada 10 instantes, até 3
}

Cenoura::~Cenoura() {
    cout<<"A destruir cenoura..."<<endl;
}
