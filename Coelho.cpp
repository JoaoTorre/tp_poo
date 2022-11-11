//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Coelho.h"

using namespace std;

Coelho::Coelho(int peso) {
    fome = 0;
    setSimbolo('C');
    setSaude(20);
    setPeso(peso);
    setVida(0);
}
Coelho::~Coelho() {
    cout<<"A destruir coelho..."<<endl;
}
