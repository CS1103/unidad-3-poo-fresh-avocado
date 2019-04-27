//
// Created by Gabriel Spranger Rojas on 2019-04-18.
//

#ifndef ELECTROESTÁTICA_SIMULADOR_H
#define ELECTROESTÁTICA_SIMULADOR_H

#include <vector>
#include "Particula.h"

using namespace std;

class Simulador {
    int max_x_pos, max_y_pos;
    string** plano;
    int numero_de_particulas;
    vector<Particula> particulas;

public:
    Simulador(int max_x_pos, int max_y_pos);
    ~Simulador();

    int get_numero_de_particulas() { return numero_de_particulas; }
    vector<Particula> get_particulas() { return particulas; }

    void print_potencia_total_en_cada_coordenada();
    void print_particulas_en_el_simulador();
    void print_cada_coordenada();
};


#endif //ELECTROESTÁTICA_SIMULADOR_H
