//
// Created by Georg on 03.10.2021.
//

#include "complex.h"

using std::ifstream;
using std::ofstream;

// Ввод параметров из потока.
void In(complex &t, ifstream &ifst) {
    ifst >> t.d >> t.i;
}

// Рандомная генерация параметров.
void InRnd(complex &e) {
    e.d = Random();
    e.i = Random();
}

// Вывод данных в файл.
void Out(complex &t, ofstream &ofst) {
    ofst << "It is Complex: d = "
         << t.d << ", i = " << t.i
         << ". Real = " << ToReal(t) << "\n";
}

// Вычисление дейтсвительного числа.
double ToReal(complex &t) {
    return (double)(sqrt(t.d * t.d + t.i * t.i));
}