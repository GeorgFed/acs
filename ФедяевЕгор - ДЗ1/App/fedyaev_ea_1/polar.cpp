//
// Created by Georg on 03.10.2021.
//

#include "polar.h"

#include "polar.h"

using std::ifstream;
using std::ofstream;

// Ввод параметров из потока.
void In(struct polar &t, ifstream &ifst) {
    ifst >> t.rad >> t.endpoint.x >> t.endpoint.y;
}

// Рандомная генерация параметров.
void InRnd(struct polar &t) {
    t.rad = Random();
    t.endpoint.x = Random();
    t.endpoint.y = Random();
}

// Вывод данных в файл.
void Out(struct polar &t, ofstream &ofst) {
    ofst << "It is Polar: angle (radians) = "
         << t.rad << ", point = (" << t.endpoint.x << ", " << t.endpoint.y << ")"
         << "real: " << ToReal(t) << "\n";
}

// Вычисление действительного числа.
double ToReal(polar &t) {
    return (double)(sqrt(t.endpoint.x * t.endpoint.x + t.endpoint.y * t.endpoint.y));
}