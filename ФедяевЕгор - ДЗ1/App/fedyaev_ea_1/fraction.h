#ifndef __fraction__
#define __fraction__

//------------------------------------------------------------------------------
// fraction.h - содержит описание дробных чисел
//------------------------------------------------------------------------------

#include <fstream>
#include <cmath>

#include "random.h"

using std::ifstream;
using std::ofstream;

//------------------------------------------------------------------------------
// дробные числа
struct fraction {
    int numerator, denominator; // дейтсивтельная и мнимая часть
};

// Ввод параметров из файла
void In(fraction &t, ifstream &ifst);

// Случайный ввод параметров
void InRnd(fraction &е);

// Вывод параметров в форматируемый поток
void Out(fraction &t, ofstream &ofst);

// Вычисление действительного числа
double ToReal(fraction &t);

#endif //__fraction__
