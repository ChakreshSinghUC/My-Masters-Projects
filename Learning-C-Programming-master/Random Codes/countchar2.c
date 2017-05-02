#include <stdio.h>
void main()
{

	double nc;
	nc = 0;
	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("\n You entered %.0f characters.\n", nc);
}
