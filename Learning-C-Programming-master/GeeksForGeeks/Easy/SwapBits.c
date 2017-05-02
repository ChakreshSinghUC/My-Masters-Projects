/*******************************************************
|Swap bits in a given number				|
|Given a number x and two positions 			|
  (from right side) in binary representation of x, 	|
  write a function that swaps n bits at given two 	|
  positions and returns the result. It is also given 	|
  that the two sets of bits do not overlap.		|
********************************************************/
#include<stdio.h>
int swapbits(int n, int a, int b) //number a, bit 1 and bit 2 to be swapped.
{
//INCOMPLETE
return n;	
		
}
void main()
{
	int n, a, b, c;
	printf("\n Enter the nuber n: ");
	scanf("%d", &n);
	printf("\n Enter the bit 1 : "); 
	scanf("%d", &a);
	printf("\n ENter the bit 2 : ");
	scanf("%d", &b);
	c = swapbits(n, a, b);
	printf("\n c: %d", c);
}	
