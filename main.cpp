//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include "Coelho.h"
#include "Ovelha.h"
#include "Lobo.h"
#include "Canguru.h"
#include "Relva.h"
#include "functions.h"

using namespace std;

int main() {
    Coelho *c1 = new Coelho(randomNumber(1,4));//inicializar coelho
    cout<<"Peso Coelho: " << c1->getPeso() <<endl;

    Ovelha *o1 = new Ovelha(randomNumber(4,8));//inicializar ovelha
    cout << "Peso Ovelha: " << o1->getPeso() << endl;

    Lobo *l1 = new Lobo(randomNumber(5, 40));//inicializar lobo
    cout<<"Lobo Reproduz a: " <<l1->getRepLobo()<<endl;

    Canguru *g1 = new Canguru();//inicializar canguru sem progenitor
    cout<<"Peso Canguru: "<<g1->getPeso()<<endl;

    Canguru *g2 = new Canguru(10);//inicializar canguru com progenitor
    cout<<"ID progenitor Canguru: "<<g2->getIDProgenitor()<<endl;

    Relva *r1 = new Relva();//inicializar relva
    cout<<"Toxicidade Relva: "<<r1->getToxicidade()<<endl;


    return 0;
}
