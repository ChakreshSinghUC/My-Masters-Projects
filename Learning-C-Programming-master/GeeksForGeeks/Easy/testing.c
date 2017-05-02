#include<stdio.h>
void main()
{
int n = 12; // dont use negative
while (n) {
    if (n & 1)
        printf("1");
    else
        printf("0");
    n >>= 1;
}
printf("\n");
}
