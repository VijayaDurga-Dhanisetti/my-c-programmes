/*
OVERVIEW:
1)Write a function which takes a octal number as input and returns the hexadecimal number for 
  octalToHexadecimal().
E.g.: octalToHexadecimal(10) returns 8.

2)Write a function which takes a fractional octal number as input and returns the hexadecimal number for 
octalToHexadecimalFraction() until precision two
E.g.: octalToHexadecimal(6.01) returns 6.04

INPUTS: Single octal number num;

OUTPUT: hexadecimal value of the octal number num.

Discalimer:Return 0 for invalid cases.[Negetive Numbers]

There are no test cases for fraction method but it would be good if you complete that too.
*/
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int octalToHexadecimal(long int num)
{
	if (num > 0)
	{
		int l, m1, m2, pow = 1 ;
		int n;
		m1 = 0;
		m2 = 0;
		while (num != 0)
		{
			l = num % 10;
			m1 += l*pow;
			num = num / 10;
			pow = pow * 8;
		}
		pow = 1;
		n = m1;
		printf("m1=%d\n", m1);
		while (n != 0)
		{
			l = n % 16;
			m2 += l*pow;
			n = n / 16;
			pow = pow * 10;
		}
		return m2;
	}
	else
		return 0;
}

float octalToHexadecimalFraction(float num)
{
	return 0.0;
}