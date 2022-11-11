//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#ifndef TP_POO_ALIMENTO_H
#define TP_POO_ALIMENTO_H

#include <string>

using namespace std;

class Alimento {
public:
    void setSimbolo(char sSimb);
    void setVida(int sVida);
    void setNutritivo(int nNutritivo);
    void setToxicidade(int nToxicidade);
    char getSimbolo();
    int getVida();
    int getNutritivo();
    int getToxicidade();
private:
    char simbolo;
    int vida;
    int nutritivo;
    int toxicidade;
};


#endif //TP_POO_ALIMENTO_H
