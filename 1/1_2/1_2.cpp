//Вариант №3
//Блохин Павел Александрович. КЭ-106

//Лабораторная работа №1. Задание №2

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, a, b;
	cin >> x >> y;
	a = x;
	b = y;
	if (x < 0 && y < 0)
	{
		a = fabs(x);
		b = fabs(y);
	}
	if ((x < 0 && y >= 0) || (x >= 0 && y < 0))
	{
		a = x*0.5;
		b = y*0.5;
	}
	if (x >= 0 && y >= 0)
	{
		if (x<0.5 && x>2.0 && y<0.5 && y>2.0)
		{
			a = x / 10;
			b = y / 10;
		}
	}
	cout << a << " " << b;
    return 0;
}

