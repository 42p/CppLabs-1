//Variant ¹3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab ¹1. Task ¹6

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
double fact(int n)
{
	return n * fact(n - 1);
}
int main()
{
	double e, a = -1;
	cin >> e;

	for (int i = 2; fabs(a) > e; i++)
	{
		a += pow(-1, i) / fact(i);
	}
	cout << a;
}
