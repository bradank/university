// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int find_element(int array[][4], int columns, int index)
{
	return array[index / columns][index%columns];
}
void sort(int array[][4], int n, int m)
{
	int size = n*m;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (find_element(array, m, j) > find_element(array, m, j + 1))
			{
				int temp = find_element(array, m, j);
				array[j / m][j % m] = find_element(array, m, j + 1);
				array[(j+1) / m][(j+1) % m] = temp;
			}
		}
	}
}

int main()
{
	const int n = 5;
	const int m = 4;

	int arr[n][m] = {
						{ 5  ,6  ,8  ,1 },
						{ 16 ,9  ,7  ,4 },
						{ 20 ,2  ,18 ,19 },
						{ 11 ,12 ,3  ,10 },
						{ 13 ,14 ,15 ,17 } };

	sort(arr, n, m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}

