#ifndef __complex__
#define __complex__

//------------------------------------------------------------------------------
// complex.h - содержит описание полярных координат
//------------------------------------------------------------------------------

#include <fstream>
#include <cmath>

#include "random.h"

using std::ifstream;
using std::ofstream;

//------------------------------------------------------------------------------
// комплексные числа
struct complex {
    double d, i; // дейтсивтельная и мнимая часть
};

// Ввод параметров из файла
void In(complex &t, ifstream &ifst);

// Случайный ввод параметров
void InRnd(complex &е);

// Вывод параметров в форматируемый поток
void Out(complex &t, ofstream &ofst);

// Вычисление действительного числа
double ToReal(complex &t);

#endif //__complex__
