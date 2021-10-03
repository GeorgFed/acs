//------------------------------------------------------------------------------
// number.cpp - содержит процедуры связанные с обработкой обобщенного числа
// и создания произвольного числа
//------------------------------------------------------------------------------

#include "number.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенного числа из файла
number* In(ifstream &ifst) {
    number *sp;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            sp = new number;
            sp->k = number::FRACTION;
            In(sp->f, ifst);
            return sp;
        case 2:
            sp = new number;
            sp->k = number::COMPLEX;
            In(sp->c, ifst);
            return sp;
        case 3:
            sp = new number;
            sp->k = number::POLAR;
            In(sp->p, ifst);
            return sp;
        default:
            return 0;
    }
}

// Случайный ввод обобщенного числа
number *InRnd() {
    number *sp;
    auto k = rand() % 2 + 1;
    switch(k) {
        case 1:
            sp = new number;
            sp->k = number::FRACTION;
            InRnd(sp->f);
            return sp;
        case 2:
            sp = new number;
            sp->k = number::COMPLEX;
            InRnd(sp->c);
            return sp;
        case 3:
            sp = new number;
            sp->k = number::POLAR;
            InRnd(sp->p);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущего числа в поток
void Out(number &s, ofstream &ofst) {
    switch(s.k) {
        case number::FRACTION:
            Out(s.f, ofst);
            break;
        case number::COMPLEX:
            Out(s.c, ofst);
            break;
        case number::POLAR:
            Out(s.p, ofst);
            break;
        default:
            ofst << "Incorrect number!" << std::endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double ToReal(number &n) {
    switch(n.k) {
        case number::FRACTION:
            return ToReal(n.f);
            break;
        case number::COMPLEX:
            return ToReal(n.c);
            break;
        case number::POLAR:
            return ToReal(n.p);
        default:
            return 0.0;
    }
}
