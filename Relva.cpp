//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Relva.h"

using namespace std;

Relva::Relva() {
    setSimbolo('r');
    setVida(0);//ate 20
    setNutritivo(3);
    setToxicidade(0);
}
Relva::~Relva() {
    cout<<"A destruir relva..."<<endl;
}
