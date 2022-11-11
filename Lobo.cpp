//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Lobo.h"

using namespace std;

Lobo::Lobo(int n) {
    RepLobo = n;
    fome = 0;
    setSimbolo('L');
    setSaude(25);
    setPeso(15);
    setVida(0);
}

Lobo::~Lobo() {
    cout<<"A destruir lobo..."<<endl;
}

int Lobo::getRepLobo() {
    return RepLobo;
}

