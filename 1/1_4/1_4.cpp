//������� �3
//������ ����� �������������. ��-106

//������������ ������ �1. ������� �4

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double sum = 0;
	double i = 0;
	while (1)
	{
		double a;
		cin >> a;
		if (a == 0)
			break;
		if (a > 0)
		{
			sum += a;
			i++;
		}
	}
	double g;
	g = sum / i;
	cout << g;
	
    return 0;
}

