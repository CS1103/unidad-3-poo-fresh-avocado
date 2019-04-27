//
// Created by Gabriel Spranger Rojas on 2019-04-18.
//

#include <cmath>
#include "Particula.h"

const int MAX_MICRO_COULOMBS_POR_PARTICULA = 20;
const int MIN_MICRO_COULOMBS_POR_PARTICULA = 1;
const double K = 9 * pow(10, 9);

// Constructor

Particula::Particula(int max_x_pos, int max_y_pos) {
    carga = (MAX_MICRO_COULOMBS_POR_PARTICULA * ( (double)rand() / (double)RAND_MAX ) + MIN_MICRO_COULOMBS_POR_PARTICULA) * pow(10, -6);
    posX = max_x_pos * ( (double)rand() / (double)RAND_MAX );
    posY = max_y_pos * ( (double)rand() / (double)RAND_MAX );
}

double Particula::get_potencial_en_el_punto(double x, double y) {
    double r = sqrt(pow(abs(this->get_posX()-x), 2) + pow(abs(this->get_posY()-y), 2));
    double potencial = (K*this->get_carga())/r;

    return potencial;
}