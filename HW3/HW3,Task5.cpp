// HW3,Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char Task5(char symbol)
{
	for (int i = 'A'; i <= symbol; i++)
	{
		cout << char(i);
		if (i > 'A')
		{
			for (int j = i - 1; j >= 'A'; j--)
			{
				cout << char(j);
			}
		}
		cout << endl;

	}
	return 0;
}

int main()
{
	char symbol;
	do
	{
		cin >> symbol;
	} while (symbol <'A' || symbol>'Z');
	Task5(symbol);

    return 0;
}

