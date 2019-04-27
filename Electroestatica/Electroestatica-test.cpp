//
// Created by Gabriel Spranger Rojas on 2019-04-26.
//

#include <vector>
#include <cmath>

#include "catch.hpp"
#include "Particula.h"

const double K = 9 * pow(10, 9);

SCENARIO("Test para comprobar potencial total en un punto.") {
    GIVEN("Potencial en un punto.") {
        WHEN("Punto en (1, 1) y partícula en (0, 0) con 15 micro coulombs.") {
            Particula p(8, 8);
            p.set_x_and_y(0, 0);
            p.set_carga(15);
            double r = sqrt(pow(1, 2)+pow(1, 2));
            double potencial_que_debe_salir = (K*15)/r;
            REQUIRE(p.get_potencial_en_el_punto(1, 1) == potencial_que_debe_salir);
        }
    }
}

