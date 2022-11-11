//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Ovelha.h"

using namespace std;

Ovelha::Ovelha(int peso) {
    fome = 0;
    setSimbolo('0');
    setSaude(30);
    setPeso(peso);
    setVida(0);
}

Ovelha::~Ovelha() {
    cout<<"A destruir ovelha...";
}
