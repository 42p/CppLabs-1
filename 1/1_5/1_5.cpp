//Вариант №3
//Блохин Павел Александрович. КЭ-106

//Лабораторная работа №1. Задание №5

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sqrt(2 + sum);
	}
	cout << sum;
    return 0;
}

