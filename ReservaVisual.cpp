//
// Created by joaog on 11/24/2022.
//

#include "ReservaVisual.h"
#include "ReservaGeral.h"

using namespace std;


ReservaVisual::ReservaVisual() = default;

ReservaVisual::~ReservaVisual() = default;

void ReservaVisual::criarReservaVisual() {

    do {

        cout << "Introduza o numero de Linhas que deseja ver: " << "\n";

        cin >> linhasVisual;

        (linhasVisual > 0 && linhasVisual < numeroLinhas ? cout << "Linhas: " << linhasVisual :
         cout << "Numero de linhas invalido! Tem de ser entre 1 e " << numeroLinhas << " !") << "\n";

    } while (linhasVisual < 0 || linhasVisual > numeroLinhas);

    do {

        cout << "Introduza o numero de Colunas que deseja ver: " << "\n";

        cin >> colunasVisual;

        (colunasVisual > 0 && colunasVisual < numeroColunas ? cout << "Colunas: " << colunasVisual :
         cout << "Numero de colunas invalido. Tem de ser entre 1 e " << numeroColunas << " !") << "\n";

    } while (colunasVisual < 0 || colunasVisual > numeroColunas);

    for (int i = linhaInicio; i < linhasVisual; i++) {
        for (int j = colunaInicio; j < colunasVisual; j++) {
            cout << grelhaGeral[i][j].c_str();
        }
        cout << "\n";
    }
}

void ReservaVisual::mostraReservaVisual() {

    for (int i = linhaInicio; i < linhaInicio + linhasVisual; i++) {
        if (i == numeroLinhas)
            break;

        for (int j = colunaInicio; j < colunaInicio + colunasVisual; j++) {
            if (j == numeroColunas)
                break;

            cout << grelhaGeral[i][j].c_str();
        }
        cout << "\n";
    }
}

void ReservaVisual::aumentaLinha(bool up) {
    if (up) {
        if ((linhaInicio - linhasVisual) <= 0) {
            linhaInicio = 0;
            linhasVisual = linhaInicio + linhasVisual;
        } else {
            linhaInicio = linhaInicio - linhasVisual;
        }
    }
    mostraReservaVisual();
}

void ReservaVisual::diminuiLinha(bool down) {
    if (down) {

        if ((linhaInicio + linhasVisual) <= (numeroLinhas - 1)) {
            linhaInicio = linhaInicio + linhasVisual - 1;
        } else {
            linhaInicio = numeroLinhas + 1 - linhasVisual;
        }
    }
    mostraReservaVisual();
}

void ReservaVisual::diminuiColuna(bool left) {

    if (left) {

        if ((colunaInicio - colunasVisual) <= 0) {
            colunaInicio = 0;
            colunasVisual = colunaInicio + colunasVisual;
        } else {
            colunaInicio = colunaInicio - colunasVisual;
        }
    }
    mostraReservaVisual();
}

void ReservaVisual::aumentaColuna(bool right) {
    if (right) {

        if ((colunaInicio + colunasVisual) <= (numeroColunas - 1)) {
            colunaInicio = colunaInicio + colunasVisual - 1;
        } else {
            colunaInicio = numeroColunas + 1 - colunasVisual;
        }
    }
    mostraReservaVisual();
}




