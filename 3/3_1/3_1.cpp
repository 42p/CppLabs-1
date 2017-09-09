//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 1

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	freopen("INPUT.TXT", "r", stdin);
	freopen("OUTPUT.TXT", "w", stdout);

	int n = (int)1e6;
	int *a = new int[n];
	int k = 0;
	while (cin >> a[k])
	{
		k++;
	}
	for (int j = 0; j < k; j++) {
		for (int i = j; i < k; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}
	}
	for (int i = 0; i < k; i++)
		cout << a[i] << " ";

	return 0;
}