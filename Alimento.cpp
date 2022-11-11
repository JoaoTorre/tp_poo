//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#include "Alimento.h"

using namespace std;

void Alimento::setSimbolo(char sSimb) {
    simbolo = sSimb;
}

void Alimento::setVida(int sVida) {
    vida = sVida;
}

void Alimento::setNutritivo(int nNutritivo) {
    nutritivo = nNutritivo;
}

void Alimento::setToxicidade(int nToxicidade) {
    toxicidade = nToxicidade;
}

char Alimento::getSimbolo() {
    return simbolo;
}

int Alimento::getVida() {
    return vida;
}

int Alimento::getNutritivo() {
    return nutritivo;
}

int Alimento::getToxicidade() {
    return toxicidade;
}
