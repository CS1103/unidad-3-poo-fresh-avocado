//
// Created by Gabriel Spranger Rojas on 2019-04-18.
//

#ifndef ELECTROESTÁTICA_PARTICULA_H
#define ELECTROESTÁTICA_PARTICULA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Particula {
    int max_x_pos, max_y_pos;
    double posX, posY;
    double carga;

public:
    Particula(int max_x_pos, int max_y_pos);

    double get_carga() { return carga; }
    double get_posX() { return posX; }
    double get_posY() { return posY; }

    void set_carga(double carga) { this->carga = carga; }
    void set_x_and_y(double x, double y) {
        this->posX = x;
        this->posY = y;
    }

    friend ostream& operator<<(ostream& os, const Particula& particula) {
        os << "x: " << particula.posX << " | " << "y: " << particula.posY << " | " << "carga: " << particula.carga;
        return os;
    }

    double get_potencial_en_el_punto(double x, double y);
};


#endif //ELECTROESTÁTICA_PARTICULA_H
