//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 6

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
	bool first = 0;
	int ik;
	while (cin >> a[k])
	{
		if (first == 0 && a[k] < 0)
		{
			ik = k;
			first = 1;
		}
		k++;
	}
	for (int i = ik; i < k; i++)
	{
		swap(a[i], a[i + 1]);
	}
	if (first == 1)
	{
		for (int i = 0; i < k - 1; i++)
			cout << a[i] << " ";
	}
	else
	{
		for (int i = 0; i < k; i++)
			cout << a[i] << " ";
	}
	return 0;
}