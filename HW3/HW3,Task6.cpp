// HW3,Task6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void toLowerCase(char* string)
{
	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 65 && string[i] <= 90) string[i] = string[i] - 'A' + 'a';
		else string[i] = string[i];
	}
}

void usedChars(char* string)
{
	int counter = 0;
	for(int start = 'a';start<='z';start++)
	{
		for (int i = 0; string[i] != 0; i++)
		{
			if (string[i] == start)
			{
				cout << string[i];
				counter++;
				break;
			}
		}
	}
	cout << "		Chars used : "<< counter<<endl;
}

int main()
{
	char text[50];
	cin.getline(text, 50);
	toLowerCase(text);
	usedChars(text);
    return 0;
}

