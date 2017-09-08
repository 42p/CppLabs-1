//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 2. Task 3

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int n;
int *a = new int[n * 2 + 1];

void shift_r(int i, int k)
{
	for (int j = k; j >i; j--)
	{
		swap(a[j], a[j - 1]);
	}
}
void shift_l(int i, int k)
{
	for (int j = i; j < k; j++)
	{
		swap(a[j], a[j + 1]);
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sr;
	if (n % 2 == 0)
		sr = (a[n / 2] + a[n / 2 + 1]) / 2;
	else
		sr = a[n / 2];

	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			n++;
			shift_r(i + 1, n);
			a[i + 1] = sr;
		}
	}
	int i1, i2;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			i1 = i;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			i2 = i;
			break;
		}
	}
	shift_l(i1, n);
	n--;
	shift_l(i2, n);
	n--;
	//n++;
	//shift_r(1, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
