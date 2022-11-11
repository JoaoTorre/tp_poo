//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//

#ifndef TP_POO_ANIMAL_H
#define TP_POO_ANIMAL_H

using namespace std;

class Animal{
public:
    void setSimbolo(char simb);
    void setSaude(int sSaude);
    void setPeso(int sPeso);
    void setVida(int sVida);
    char getSimbolo();
    int getSaude();
    int getPeso();
    int getVida();
private:
    char simbolo;
    int saude;
    int peso;
    int vida;
};


#endif //TP_POO_ANIMAL_H
