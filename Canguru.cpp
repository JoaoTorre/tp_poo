//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Canguru.h"

using namespace std;

Canguru::Canguru() {
    setSimbolo('G');
    setSaude(20);
    setPeso(10);
    setVida(0);
    bolsa = false;
}

Canguru::Canguru(int p) {
    setSimbolo('G');
    setSaude(20);
    setPeso(10);
    setVida(0);
    IDProgenitor = p;
    bolsa = false;
}

Canguru::~Canguru() {
    cout<<"Adestruir Canguru..."<<endl;
}

int Canguru::getIDProgenitor(){
    return IDProgenitor;
}
