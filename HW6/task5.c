#include <stdio.h>
#include <stdlib.h>
int sum_Numbers(int);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", sum_Numbers(n));
	return 0;
}

int sum_Numbers(int n)
{
	int i, sum_N=0;
	for (i = 1; i <= n; i++)
	{
		sum_N+=i;
	}
	return sum_N;
}
