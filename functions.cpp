//
// Created by João Marcelo Costa da Torre
//  N 2019123679
//
#include <iostream>
#include <string>
#include "functions.h"

int randomNumber(int nMin, int nMax){
    srand(time(0));
    return (rand() %nMax + nMin);
}

