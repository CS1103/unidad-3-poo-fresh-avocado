#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Particula.h"
#include "Simulador.h"

//#define CATCH_CONFIG_MAIN

#include "catch.hpp"

using namespace std;

#ifndef CATCH_CONFIG_MAIN

int main() {

    srand(time(nullptr));

    Simulador simulador(8, 8);

    simulador.print_particulas_en_el_simulador();
    cout << endl;
    simulador.print_potencia_total_en_cada_coordenada();

    return 0;
}

#endif