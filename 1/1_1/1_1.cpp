//Вариант №3
//Блохин Павел Александрович. КЭ-106

//Лабораторная работа №1. Задание №1

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, z, a, b;
	cin >> x >> y >> z;
	a = (1 + sin(x + y)*sin(x + y)) / (2 + fabs(x - (2 * x) / (1 + x*x*y*y))) + x;
	b = cos(atan(1 / z))*cos(atan(1 / z));
	cout << a << " " << b;
    return 0;
}

