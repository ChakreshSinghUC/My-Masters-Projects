#include<stdio.h>
void main()
{
	int c, nl, nb, nt;

	nl = 0;
	nb = 0;
	nt = 0;
	while((c = getchar()) != EOF)
	{	if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if( c == ' ')
			++nb;
	}
	printf("\n --------------------------------------\n The number of blank spaces are: %d", nb);
	printf("\n The number of tabs entered are: %d", nt);
	printf("\n The number of lines entered are: %d \n-------------------------------------\n", nl);
}
