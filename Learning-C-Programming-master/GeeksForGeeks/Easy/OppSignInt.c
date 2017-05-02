/**
Detect if two integers have opposite signs.

Given two signed integers, write a function that returns true if the signs of given integers are different, otherwise false. 
For example, the function should return true -1 and +100, and should return false for -100 and -200. The function should not use any of the arithmetic operators. 
**/
#include<stdio.h>
#include<stdbool.h>
bool isOppositeSigned(int m, int n)
{
	return ((m^n)>>31);
}
void main()
{
	int a = 9, b = -31;
	printf("%d \n", (a^b)>>31);
	if (isOppositeSigned(a,b) == true)
		printf("Both are of opposite signs \n");
	else if (isOppositeSigned(a,b) == false)
		printf("Both are of same sign \n");	
}
