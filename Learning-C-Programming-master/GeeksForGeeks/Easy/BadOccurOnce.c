//Program to find the element that occurs only once in a series of numbers such that each elements occurs thrice except one.
// Time Complexity O(n^2) -- Not good enough!

#include <stdio.h>

int findNumber(int a[])
{
	int counter = 0;
	for (int i = 0; i<sizeof(&a); i++)
	{		
		for (int j = 0; j< sizeof(&a); j++)
		{	if (a[i] == a[j])
				counter++;
		}
		if (counter == 1)
			return i;
		else 
			counter = 0;
	}
	return -1;
}

void main()
{
	int m[10]= {3,2,5,2,3,2,4,5,3,5};
	int j = findNumber(m); //index of the number that occurs only once in m[].
	printf("/n The number that occurs only once in the given array is: %d \n", m[j]);
}
