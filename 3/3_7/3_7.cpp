//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 3. Task 7

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

int main()
{
	
	freopen("INPUT.TXT", "r", stdin);
	freopen("OUTPUT.TXT", "w", stdout);
	int n = (int)1e6;
	char *a = new char[n];
	int k = 0;
	int null = 0;
	while (cin >> a[k])
	{
		k++;

	}
	bool t1 = 1;
	bool t2 = 1;
	bool t3 = 1;
	// 1 ' () '
	// 2 ' {} '
	// 3 ' [] '
	stack <char> st1;
	stack <char> st2;
	stack <char> st3;
	for (int i = 0; i < k; i++)
	{
		if (a[i] == '(')
			st1.push(a[i]);
		if (a[i] == ')')
		{
			if (st1.empty())
			{
				goto A;
			}
			else
				st1.pop();
		}
		if (a[i] == '{')
			st2.push(a[i]);
		if (a[i] == '}')
		{
			if (st2.empty())
			{
				goto A;
			}
			else
				st2.pop();
		}

		if (a[i] == '[')
			st3.push(a[i]);
		if (a[i] == ']')
		{
			if (st3.empty())
			{
				goto A;
			}
			else
				st3.pop();
		}



	}

	if (st1.empty()) t1 = 0;
	if (st2.empty()) t2 = 0;
	if (st3.empty()) t3 = 0;
	
	if (t1 == 0 && t2 == 0 && t3 == 0)
		cout << "correctly";
	else
	{
	A:
		cout << "incorrectly";
	}



	return 0;
}