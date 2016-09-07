// INFO450Multiply.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	cout << "Multiplication Table: " << endl;
	cout << "0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 "<< endl;
	for (int i = 1; i < 10; i++)
	{
		cout << i << '\t';
		for (int j = 1; j < 10; j++)
		{
			
			cout << j * i << '\t';
		}
	}

	return 0;
}

