//Variant 3
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 4. Task 1

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
struct note {
	string Name;
	string surName;
	int number;
	int number_short;
	int date[3];
};
int main()
{
	note mas[8];
	note em;
	int k = 8;
	for (int i = 0; i < 8; i++)
	{
		char ccc;
		ccc = cin.get();
		if (ccc == '\n')
		{
			k = i;
			break;
		}
		cin >> mas[i].Name;
		mas[i].Name = ccc + mas[i].Name;

		cin >> mas[i].surName >> mas[i].number;
		for (int j = 0; j < 3; j++)
			cin >> mas[i].date[j];

		char p = cin.get();
	}
	for (int i = 0; i < k; i++)
	{
		stack <int> st;

		int n;
		n = mas[i].number;
		while (n != 0)
		{
			st.push(n % 10);
			n = n / 10;
		}
		mas[i].number_short = st.top() * 100;
		st.pop();
		mas[i].number_short += st.top() * 10;
		st.pop();
		mas[i].number_short += st.top();

	}


	string findName;
	bool fName = 0;
	cin >> findName;


	for (int j = 0; j < k; j++)
	{
		for (int i = j; i < k - 1; i++)
		{
			if (mas[i].number_short > mas[i + 1].number_short)
			{
				swap(mas[i], mas[i + 1]);
			}
		}
	}

	for (int i = 0; i < k; i++)
	{
		if (findName == mas[i].Name)
		{
			fName = 1;
			cout << mas[i].Name << " " << mas[i].surName << " " << mas[i].number;
			for (int j = 0; j < 3; j++)
				cout << " " << mas[i].date[j];
			break;
		}
	}
	if (fName == 0)
		cout << "Not found";
	return 0;
}