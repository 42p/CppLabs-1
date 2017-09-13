//Variant 4
//Blokhin Pavel Aleksandrovich. Group-106

//Lab 5. Task 1

/*
ќписать класс Ђƒомашн€€ библиотекаї. ѕредусмотреть возможность работы с произвольным
числом книг, поиска книги по какому-либо признаку (например, по автору или году издани€),
добавлени€ книг в библиотеку, удалени€ книг из нее, сортировки книг по разным пол€м.
ѕрограмма должна содержать меню, позвол€ющее осуществл€ть проверку всех методов.
*/


#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
struct Book {
	char *title = new char[255];
	char *author = new char[255];
	int numb;
	char *date = new char[255];
	char *genre = new char[255]; // омеди€, драма, роман, трагеди€, поэма, ужасы (6)
};
class Libary {
public:
	int n = 1;
	Book *b = new Book[n + 1];
	void Add()
	{
		char *number = new char[255];
		//cin.getline(number, 255);
		cout << "Adding a book:" << endl << endl;
		cout << "Enter book title: ";
		cin.getline(b[n].title, 255);
		cout << "Enter book author: ";
		cin.getline(b[n].author, 255);
		cout << "Enter the number of pages: ";
		cin.getline(number, 255);
		b[n].numb = atoi(number);
		delete number;
		cout << "Enter the year of publication(DD.MM.YYYY): ";
		char *datecin = new char[12];
		while (1)
		{
			cin.getline(datecin, 11);
			if (datecin[0] >= '0' && datecin[0] <= '9' && datecin[1] >= '0' && datecin[1] <= '9' && datecin[2] == '.' && datecin[3] >= '0' && datecin[3] <= '9' && datecin[4] >= '0' && datecin[4] <= '9' && datecin[5] == '.' && datecin[6] >= '0' && datecin[6] <= '9'&& datecin[7] >= '0' && datecin[7] <= '9' && datecin[8] >= '0' && datecin[8] <= '9' && datecin[9] >= '0' && datecin[9] <= '9')
			{
				break;
			}
			else
				cout << "\nWRONG Date. Please type in the example(DD.MM.YYYY)\n";
		}
		b[n].date = datecin;
		cout << "Enter the genre of the book: ";
		cin.getline(b[n].genre, 255);
		n++;
	}
	void Print()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Book number " << i << ":" << endl;
			cout << b[i].title << endl << b[i].author << endl << b[i].numb << endl << b[i].date << endl << b[i].genre << endl << endl;
		}
	}
	void Delete(int ind)
	{
		for (int i = ind; i < n - 1; i++)
		{
			swap(b[i], b[i + 1]);
		}
		n--;
	}
	void Find(int i)
	{
		if (i < n && i >= 0)
		{
			cout << "Book number " << i << ":" << endl;
			cout << b[i].title << endl << b[i].author << b[i].numb << endl << b[i].date << endl << b[i].genre << endl << endl;
		}
		else
			cout << "Not found.\n";
	}
	void Sort(int z)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n - 1; j++)
			{
				if (z == 1)
				{
					if (b[i].title[0] > b[i + 1].title[0])
						swap(b[i], b[i + 1]);
				}
				if (z == 2)
				{
					if (b[i].author[0] > b[i + 1].author[0])
						swap(b[i], b[i + 1]);
				}
				if (z == 3)
				{
					if (b[i].genre[0] > b[i + 1].genre[0])
						swap(b[i], b[i + 1]);
				}
				if (z == 4)
				{
					//DD.MM.YYYY
					int d = (b[i].date[0] - '0') * 10 + (b[i].date[1] - '0');
					int m = (b[i].date[3] - '0') * 10 + (b[i].date[4] - '0');
					int y = (b[i].date[6] - '0') * 1000 + (b[i].date[7] - '0') * 100 + (b[i].date[8] - '0') * 10 + (b[i].date[9] - '0');

					int d1 = (b[i + 1].date[0] - '0') * 10 + (b[i + 1].date[1] - '0');
					int m1 = (b[i + 1].date[3] - '0') * 10 + (b[i + 1].date[4] - '0');
					int y1 = (b[i + 1].date[6] - '0') * 1000 + (b[i + 1].date[7] - '0') * 100 + (b[i + 1].date[8] - '0') * 10 + (b[i + 1].date[9] - '0');
					if (y > y1)
					{
						swap(b[i], b[i + 1]);
					}
					if (y == y1)
					{
						if (m > m1)
						{
							swap(b[i], b[i + 1]);
						}
						if (m == m1)
						{
							if (d > d1)
							{
								swap(b[i], b[i + 1]);
							}
						}
					}
				}
			}
		}
		cout << "\nSorted...\n";
	}
};
int main()
{
	Libary home_lib;
	int count = 0;
	char *number = new char[255];
	cout << "Adding a book:" << endl << endl;
	cout << "Enter book title: ";
	cin.getline(home_lib.b[count].title, 255);
	cout << "Enter book author: ";
	cin.getline(home_lib.b[count].author, 255);
	cout << "Enter the number of pages: ";
	while (1)
	{
		cin.getline(number, 255);
		if (number[0] >= '0' && number[0] <= '9')
			break;
		else
			cout << "\nWrong value\n";
	}
	home_lib.b[count].numb = atoi(number);
	delete number;
	cout << "Enter the year of publication(DD.MM.YYYY): ";
	char datecin[11];
	while (1)
	{
		cin.getline(datecin, 11);
		if (datecin[0] >= '0' && datecin[0] <= '9' && datecin[1] >= '0' && datecin[1] <= '9' && datecin[2] == '.' && datecin[3] >= '0' && datecin[3] <= '9' && datecin[4] >= '0' && datecin[4] <= '9' && datecin[5] == '.' && datecin[6] >= '0' && datecin[6] <= '9'&& datecin[7] >= '0' && datecin[7] <= '9' && datecin[8] >= '0' && datecin[8] <= '9' && datecin[9] >= '0' && datecin[9] <= '9')
			break;
		else
			cout << "\nWRONG Date. Please type in the example(DD.MM.YYYY)\n";
	}
	home_lib.b[count].date = datecin;
	cout << "Enter the genre of the book: ";
	cin.getline(home_lib.b[count].genre, 255);
	count++;
	//Crutch
	while (1) {
		system("CLS");
		cout << "=======================\n";
		cout << "1) Print all books." << endl;
		cout << "2) Add a book." << endl;
		cout << "3) Delete a book." << endl;
		cout << "4) Sorting books." << endl;
		cout << "5) Print a specific book." << endl;
		cout << "e) Exiting the program." << endl;
		cout << "=======================\n";
		char *qe = new char[255];
		char q;

		while (1)
		{
			cin.getline(qe, 255);
			if (strlen(qe) == 1 && ((qe[0] > '0' && qe[0] < '6') || qe[0] == 'e'))
			{
				q = qe[0];
				break;
			}
			else
				cout << "\nIncorrect value\n";
		}

		cout << endl;
		if (q == 'e')
		{
			return 0;
		}
		if (q == '1')
		{
			home_lib.Print();
		}
		if (q == '2')
		{
			count++;
			home_lib.Add();
			cout << "\nAdded...\n";
		}
		if (q == '3')
		{
			cout << "Enter the index of the book to delete: ";
			int index;
			cin >> index;
			count--;
			home_lib.Delete(index);
			cout << "\nRemoved...\n";
		}
		if (q == '4')
		{
			system("CLS");
			cout << "Sorting books:\n";
			cout << "=======================\n";
			cout << "1) Sort by title.\n";
			cout << "2) Sort by author.\n";
			cout << "3) Sort by genre.\n";
			cout << "4) Sort by year of publication.\n";
			cout << "=======================\n";
			char q1;
			cin >> q1;
			home_lib.Sort(q1 - '0');

		}
		if (q == '5')
		{
			cout << "Enter the index of the book: ";
			int index;
			cin >> index;
			home_lib.Find(index);
		}

		system("Pause");
	}




	return 0;
}

