//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 2. Task 2

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	int max, max_i=0;

	for (int i = 0; i < n; i++)
	{
		
		cin >> a[i];

		if (i == 0)
			max = a[i];

		if (a[i] > max)
		{
			max = a[i];
			max_i = i;
		}
	}
	for (int i = 0; i < max_i; i++)
	{
		if (i % 2 == 0)
			a[i] *= max;
		cout << a[i] << " ";
	}
    return 0;
}

