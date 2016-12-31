// HW3,Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char Task4(char symbol)
{
	for (int i = 'A'; i <= symbol; i++)
	{
		for (int j = 0; j < symbol-i; j++)
		{
			cout << " ";
		}
		cout << char(i);
		for (int k = 'A'; k<i; k++)
		{
			cout << "*";
		}
		for (int n = 'B'; n<i; n++)
		{
			cout << "*";
		}
		if (i!='A')cout << char(i);
		cout << endl;
	}
	for (int p = symbol - 1; p >= 'A'; p--)
	{
		for (int h = 0; h <symbol - p; h++)
		{
			cout << " ";
		}
		cout << char(p);
		for (int u = 0; u < p - 'A'; u++)
		{
			cout << "*";
		}
		for (int q = 1; q < p - 'A'; q++)
		{
			cout << "*";
		}
		if (p != 'A')cout << char(p)<<endl;

	}
	cout << endl;
	return 0;
}

int main()
{
	char symbol;
	do
	{
		cin >> symbol;
	} while (symbol <'A'||symbol>'Z');

	Task4(symbol);

    return 0;
}

