#include<stdio.h>
#include<ctype.h>
void main()
{
	char str[] = "this is a string";
	int i = 0;
//	isdigit();
	while(str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}	

printf("\n");
printf("\n Is digit %d \n", isdigit('a'));


}
