#include<stdio.h>
void main()
{	
	int nb; 
	nb = 0;
	int c;
	while((c = getchar()) != EOF)
	{	
		if(c == ' ')
			++nb;
		if(nb>1 && c != ' ')
			nb =0;
		if(nb <= 1)
			putchar(c);
	}
}
