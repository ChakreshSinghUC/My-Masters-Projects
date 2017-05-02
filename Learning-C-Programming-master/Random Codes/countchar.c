#include<stdio.h>
void main()
{
	long count = 0;
	while (getchar() != EOF)
		++count;
	printf("\n You entered %ld characters.\n", count);
}
	
