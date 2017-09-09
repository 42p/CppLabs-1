//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 9

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stack>
#include <queue>  
using namespace std;

int main()
{

	freopen("INPUT.TXT", "r", stdin);
	int n = (int)1e6;
	int *a = new int[n];
	int *b = new int[n];
	int ak = 0;
	int bk = 0;
	int em;
	while (cin >> em)
	{
		if (em % 2 == 0)
		{
			a[ak] = em;
			ak++;
		}
		else
		{
			b[bk] = em;
			bk++;
		}

	}
	freopen("ODD.TXT", "w", stdout);
	for (int i = 0; i < ak; i++)
	{
		cout << a[i] << " ";
	}
	freopen("EVEN.TXT", "w", stdout);
	for (int i = 0; i < bk; i++)
	{
		cout << b[i] << " ";
	}


    return 0;
}

