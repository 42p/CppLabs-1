//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 2. Task 4

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, k = 0, sum = 0;
	cin >> n;
	int **a = new int*[n];
	int *b = new int[2 * n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	for (int i = n - 1; i > 0; i--)
	{
		sum = 0;
		for (int j = i; j < n; j++)
			sum += a[j][j - i];
		b[k++] = sum;
	}
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = i; j < n; j++)
			sum += a[j - i][j];
		b[k++] = sum;
	}
	for (int i = 0; i < k; i++)
		cout << b[i] << " ";

	return 0;
}