//
// Created by Gabriel Spranger Rojas on 2019-04-18.
//

//#include <iostream>
#include <ctime>
#include <string>
#include <cmath>
#include "Simulador.h"

const int MAX_NUM_PARTICULAS = 8;
const int MIN_NUM_PARTICULAS = 1;

using namespace std;

Simulador::Simulador(int max_x_pos, int max_y_pos) {
    this->max_x_pos = max_x_pos;
    this->max_y_pos = max_y_pos;
    //// Creando un número random de partículas
    numero_de_particulas = (rand() % MAX_NUM_PARTICULAS) + MIN_NUM_PARTICULAS;
    //// Llenando el vector de partículas
    for (int k = 0; k < numero_de_particulas; ++k) {
        particulas.emplace_back(Particula(max_x_pos, max_y_pos));
    }
    //// Llenando la matriz plano
    plano = new string*[max_x_pos+1];

    for (int i = 0; i < max_x_pos+1; ++i) {
        plano[i] = new string[max_y_pos+1];
    }

    for (int i = 0; i < max_x_pos+1; ++i) {
        for (int j = max_y_pos, y = 0; j >= 0; --j, ++y) {
             plano[i][j] = to_string(i) + ", " + to_string(y);
        }
    }
}

void Simulador::print_particulas_en_el_simulador() {
    for (int k = 0; k < numero_de_particulas; ++k) {
        cout << particulas[k] << endl;
    }
}

void Simulador::print_cada_coordenada() {
    for (int i = 0; i < max_x_pos+1; ++i) {
        for (int j = max_y_pos, y = 0; j >= 0; --j, ++y) {
            cout << plano[i][j] << endl;
        }
    }
}

Simulador::~Simulador() {
    for (int i = 0; i < max_x_pos; ++i) {
        delete [] plano[i];
    }
    delete [] plano;
}

void Simulador::print_potencia_total_en_cada_coordenada() {
    double r;
    double potencial_total = 0;

    cout << "Potencial en cada punto. Siguiendo el formato X, Y, POTENCIAL_TOTAL:" << endl;

    for (int i = 0; i < max_x_pos+1; ++i) {
        for (int j = max_y_pos; j >= 0; --j) {
            for (int k = 0; k < numero_de_particulas; ++k) {
                  potencial_total += particulas[k].get_potencial_en_el_punto(i, j);
            }
            cout << i << ", " << j << ", " << potencial_total << endl;
            potencial_total = 0;
        }
    }
}

























































