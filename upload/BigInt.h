#pragma once
#include "stdafx.h"

class BigInt
{
public:
	BigInt();
	BigInt(int);
	BigInt(char*);
	~BigInt();

	BigInt& operator=(const BigInt&);
	BigInt& operator=(int);
	BigInt& operator+(const BigInt&);

	void print();

private:
	char* number;
	int size;
	int capacity;
};

