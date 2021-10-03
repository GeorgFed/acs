#ifndef __polar__
#define __polar__

//------------------------------------------------------------------------------
// polar.h - содержит описание дробных чисел
//------------------------------------------------------------------------------

#include <fstream>
#include <cmath>

#include "random.h"
#include "point.h"

using std::ifstream;
using std::ofstream;

//------------------------------------------------------------------------------
// полярные координаты
struct polar {
    double rad;
    point endpoint;
};

// Ввод параметров из файла
void In(polar &t, ifstream &ifst);

// Случайный ввод параметров
void InRnd(polar &е);

// Вывод параметров в форматируемый поток
void Out(polar &t, ofstream &ofst);

// Вычисление действительного числа
double ToReal(polar &t);

#endif //__polar__
