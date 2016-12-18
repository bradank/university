// HW2,Task1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int max = 105;

void fill_array(int array[][max], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a("<<i<<") = ";
		cin >> array[0][i];
		cout << "b(" << i << ") = ";
		cin >> array [1][i];
	}
}

void divide_array(int array[][max], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[0][i] << " /  " << array[1][i] << " = " << floor(((double)array[0][i] / array[1][i]) * 100) << "%"<<endl;
	}
}
int main()
{

	int n;
	for (int i = 0; i < 1;)
	{
		cin >> n;
		if (n >= 5 && n <= 105) i++;
	}

	int arr[2][max];
	fill_array(arr, n);
	divide_array(arr, n);

    return 0;
}

