#include<stdio.h>
void main()
{
	int a[11] = {1, 2, 4, 3, 3, 2, 5, 6, 1, 6, 5};
	int len = sizeof(a)/sizeof(a[0]);	
	int xor = 0; //default. Note 0 xor  0 = 0. 1 xor 0 = 1.
	for (int i = 0; i< len; i++)
		xor = xor^a[i];	
	printf("%d \n", xor);
}
