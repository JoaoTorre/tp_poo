//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Animal.h"

using namespace std;

void Animal::setSimbolo(char simb) {
    simbolo = simb;
}

void Animal::setSaude(int sSaude) {
    saude = sSaude;
}

void Animal::setPeso(int sPeso) {
    peso = sPeso;
}

void Animal::setVida(int sVida) {
    vida = sVida;
}

char Animal::getSimbolo() {
    return simbolo;
}

int Animal::getSaude() {
    return saude;
}

int Animal::getPeso() {
    return peso;
}

int Animal::getVida() {
    return vida;
}
