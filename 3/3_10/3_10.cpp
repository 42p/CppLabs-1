//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 10

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stack>
#include <queue>  
using namespace std;

int main()
{

	freopen("INPUT.TXT", "r", stdin);
	freopen("OUTPUT.TXT", "w", stdout);
	int n = (int)1e6;
	int *a = new int[n];
	int k = 0;
	int null = 0;
	while (cin >> a[k])
	{
		k++;
		if (a[k] == 0)
			null++;

	}
	for (int i = 0; i < k; i++)
	{
		cout << a[i] << " ";
	}
	cout << null;




	return 0;
}