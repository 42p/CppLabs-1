//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 2

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
	int sum = 0;
	while (cin >> a[k])
	{
		sum += a[k];
		k++;
	}
	for (int i = 0; i < k; i++)
		cout << a[i] << " ";
	cout << endl << (double)sum / k;
	return 0;
}