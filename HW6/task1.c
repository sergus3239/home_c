#include <stdio.h>
int abs(int number)
{
	return (number<0)?-number:number;
}
int main(void)
{
	int number;
	scanf ("%d", &number);
	printf ("%d",abs(number));
	return 0;
}
