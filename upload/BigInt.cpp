#include "stdafx.h"
#include "BigInt.h"
#include <cstring>
#include <iostream>

using namespace std;

BigInt::BigInt():number(nullptr),size(0),capacity(0)
{
	this->number = new char[1];
	this->number[0] = '\0';
	
}


BigInt::BigInt(int newNumber):number(nullptr),size(0),capacity(0)
{

	bool isNegative = false;
	if (newNumber < 0) isNegative = true;
	int len = 0;
	int temp = newNumber;
	while (temp)
	{
		len++;
		temp /= 10;
	}

	if (len)
	{


		if (isNegative)
		{
			this->number = new char[len + 2];
			this->number[0] = '-';
			for (int i = len; i >= 1; i--)
			{
				this->number[i] = '0' - newNumber % 10;
				newNumber /= 10;
			}
			this->number[len + 1] = '\0';
			this->size = len;
			this->capacity = len;

		}

		else
		{
			this->number = new char[len + 1];

			for (int i = len - 1; i >= 0; i--)
			{
				this->number[i] = '0' + newNumber % 10;
				newNumber /= 10;
			}
			this->number[len] = '\0';
			this->size = len;
			this->capacity = len;
		}
		
	}

	else
	{
		this->number = new char[2];
		strcpy_s(this->number, 2, "0");
		this->size = 1;
		this->capacity = 1;
	}


}


BigInt::BigInt(char* newNumber):number(nullptr),size(0),capacity(0)
{
	int len = strlen(newNumber);
	if (len)
	{
		this->number = new char[len + 1];
		strcpy_s(this->number, len+1, newNumber);
	}
	else
	{
		this->number = new char[1];
		this->number[0] = '\0';
	}
	this->size = len;
	this->capacity = len;

}

BigInt& BigInt::operator=(const BigInt& rhs)
{
	if (rhs.number != nullptr)
	{
		int len = strlen(rhs.number);
		if (len)
		{
			this->number = new char[len + 1];
			strcpy_s(this->number, len + 1, rhs.number);
		}
		else
		{
			this->number = new char[1];
			this->number[0] = '\0';
		}
		this->size = len;
		this->capacity = len;

	}
	return *this;

}

BigInt& BigInt::operator=(int rhs)
{
	bool isNegative = false;
	if (rhs < 0) isNegative = true;
	int len = 0;
	int temp = rhs;
	while (temp)
	{
		len++;
		temp /= 10;
	}

	if (len)
	{


		if (isNegative)
		{
			this->number = new char[len + 2];
			this->number[0] = '-';
			for (int i = len; i >= 1; i--)
			{
				this->number[i] = '0' - rhs % 10;
				rhs /= 10;
			}
			this->number[len + 1] = '\0';
			this->size = len;
			this->capacity = len;

		}

		else
		{
			this->number = new char[len + 1];

			for (int i = len - 1; i >= 0; i--)
			{
				this->number[i] = '0' + rhs % 10;
				rhs /= 10;
			}
			this->number[len] = '\0';
			this->size = len;
			this->capacity = len;
		}

	}

	else
	{
		this->number = new char[2];
		strcpy_s(this->number, 2, "0");
		this->size = 1;
		this->capacity = 1;
	}

	return *this;
}



BigInt::~BigInt()
{
	delete[] number;
}

void BigInt::print()
{
	cout << this->number;
}
