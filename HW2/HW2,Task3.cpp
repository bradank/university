// Homework2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int **new_array(int n)
{
	int **array = new int *[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}
	return array;
}

void fill_array(int **array, int n)
{
	int topWall = 0;
	int rightWall = n;
	int botWall = n;
	int leftWall = 0;

	int counter = 1;
	while (counter <= n*n)
	{
		for (int i = leftWall; i < rightWall; i++)
		{
			array[topWall][i] = counter;
			counter++;
		}
		topWall++;

		for (int i = topWall; i < botWall; i++)
		{
			array[i][rightWall-1] = counter;
			counter++;
		}
		rightWall--;

		for (int i = rightWall-1; i >= leftWall; i--)
		{
			array[botWall-1][i] = counter;
			counter++;
		}
		botWall--;

		for (int i = botWall-1; i >= topWall; i--)
		{
			array[i][leftWall] = counter;
			counter++;
		}
		leftWall++;
	}
}
void print_array(int** array, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void delete_mem(int** array, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] array[i];
	}
	delete[] array;
}


int main()
{
	int n;
	cin >> n;
	int **matrix = new_array(n);
	fill_array(matrix, n);
	print_array(matrix, n, n);
	delete_mem(matrix, n);
    return 0;
}

