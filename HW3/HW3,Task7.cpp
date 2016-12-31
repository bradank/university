// HW3,Task7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void proportion(char* string)
{
	bool upperCase = false;
	int namesCount = 0;
	int dogsCount = 0;
	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'A'&&string[i] <= 'Z') upperCase = true;
		if (!upperCase && (string[i]==32||string[i+1]==0))
			dogsCount++;
		if (upperCase&&(string[i] == 32||string[i+1]==0))
		{
			namesCount++;
			upperCase = false;
		}
		
	}
	cout << "Names to dogs ratio : "<< namesCount << " / " << dogsCount<<endl;
}

int main()
{
	char text[50];
	cin.getline(text, 50);
	proportion(text);

    return 0;
}

