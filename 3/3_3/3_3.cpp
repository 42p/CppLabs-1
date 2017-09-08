//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 3

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
	for (int i = 0; i < k-1; i++)
		cout << a[i] << " ";
	bool find = 0;
	for (int i = 0; i < k - 1; i++)
	{
		if (a[i] == a[k - 1])
			find = 1;
	}
	if (find == 1)
		cout << endl << "YES";
	else
		cout << endl << "NO";
	return 0;
}