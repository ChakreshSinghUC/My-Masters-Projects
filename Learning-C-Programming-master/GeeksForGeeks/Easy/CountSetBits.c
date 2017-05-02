/*
   Count total set bits in all numbers from 1 to n

   Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n. 

Asked in: Amazon interview 
*/
//#include<stdbool.h>
#include<stdio.h>
void main()
{
	
	int m, n;
	int count = 0;
	printf("\n Enter a number m: ");
	scanf("%d",&m);

	for (int i = 1; i<= m; i++)
	{	
	n = i; // Note Bitwise operators alters the variable.
		while (n)
		{
		if (n & 1)
			count++;
		n >>=1;
		}
	}
	
	printf("Count: %d \n", count);
}
