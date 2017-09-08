//Вариант №3
//Блохин Павел Александрович. КЭ-106

//Лабораторная работа №1. Задание №3

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	for (int i = 10; i < 100; i++)
	{
		int a,a1,a2;
		a = i;
		a1 = a / 10;
		a2 = a % 10;
		if ((a1*a1 + a2*a2) % 13 == 0)
		{
			cout << i << " ";
		}
	}
    return 0;
}

