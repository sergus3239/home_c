#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n));
	return 0;
}

int factorial(int n)
{
	int i, mult_N=1;
	for (i = 1; i <= n; i++)
		mult_N*=i;
	return mult_N;
}
