//
// Created by Georg on 03.10.2021.
//

#include "fraction.h"

using std::ifstream;
using std::ofstream;

// Ввод параметров из потока.
void In(fraction &t, ifstream &ifst) {
    ifst >> t.numerator >> t.denominator;
}

// Рандомная генерация параметров.
void InRnd(fraction &e) {
    e.numerator = Random();
    e.denominator = Random();
}

// Вывод данных в файл.
void Out(fraction &t, ofstream &ofst) {
    ofst << "It is Fraction: numenator = "
         << t.numerator << ", denominator = " << t.denominator
         << ". Real = " << ToReal(t) << "\n";
}

// Вычисление дейтсвительного числа.
double ToReal(fraction &t) {
    return (double)(t.numerator / t.denominator);
}