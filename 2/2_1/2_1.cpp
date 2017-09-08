//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 2. Task 1

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, c, ic, sum;
	sum = 1;
	c = 0;
	ic = 0;

	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0)
			c++;
		else
			ic++;
	}
	if (c == ic)
	{
		for (int i = 0; i < n; i++)
		{
			sum *= a[i] + a[n - 1 - i];
		}
		cout << sum;
	}


    return 0;
}

