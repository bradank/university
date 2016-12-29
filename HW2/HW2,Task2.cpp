// HW2,Task2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int row = 6;
const int col = 5;

void print_element(int array[row][col], int index)
{
	cout << array[index / col][index % col] << endl;
}


int main()
{
	int arr[row][col] = {
		{ 11,12,13,14,15 },
		{ 21,22,23,24,25 },
		{ 31,32,33,34,35 },
		{ 41,42,43,44,45 },
		{ 51,52,53,54,55 },
		{ 61,62,63,64,65 }
	};

	int index;
	cin >> index;
	if (index < 0 || index >= 29) cout << "Invalid index.";
	else print_element(arr, index);
	
    return 0;
}

