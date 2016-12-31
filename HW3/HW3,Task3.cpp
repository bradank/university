// HW3,Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Task3(char* string)
{
	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] == 'T') return i + 1;
	}
	return 0;
}

int main()
{
	char text[50];
	cin.getline(text, 50);
	if (Task3(text))
	cout << "'T' is in " << Task3(text) << "th position." << endl;
	else cout << "String does not contain 'T' ";
    return 0;
}

