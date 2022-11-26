#include "ReservaGeral.h"
#include <string>
using namespace std;

ReservaGeral::ReservaGeral() = default;

ReservaGeral::~ReservaGeral() = default;

void ReservaGeral::criarReservaGeral() {

    do {

        cout << "Introduza o numero de Linhas (entre 16 e 500): " << "\n";

        cin >> numeroLinhas;

        (numeroLinhas > 15 && numeroLinhas < 501 ? cout << "Linhas: " << numeroLinhas :
         cout << "Numero de numeroLinhas invalido! Tem de ser entre 16 e 500!") << "\n";

    } while (numeroLinhas < 16 || numeroLinhas > 501);

    do {

        cout << "Introduza o numero de Colunas (entre 16 e 500): " << "\n";

        cin >> numeroColunas;

        (numeroColunas > 1 && numeroColunas < 501 ? cout << "Colunas: " << numeroColunas :
         cout << "Numero de numeroColunas invalido. Tem de ser entre 16 e 500!") << "\n";

    } while (numeroColunas < 16 || numeroColunas > 501);

    int jj=0;
    for (int i = 0; i < numeroLinhas; i++) {
        vector<string> rowGeral;
        for (int j = 0; j < numeroColunas; j++) {
            jj++;
            string aux;
            if (j == 0) {
                aux = "|" + to_string(jj) + "|";

            } else
                aux = to_string(jj) + "|";
                rowGeral.emplace_back(aux);

        }
        grelhaGeral.push_back(rowGeral);
    }
    for (int i = 0; i < numeroLinhas; i++) {
        for (int j = 0; j < numeroColunas; j++) {
            cout << grelhaGeral[i][j].c_str();
        }
        cout << "\n";
    }

}







