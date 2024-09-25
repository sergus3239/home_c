#include <stdio.h>
#include <stdlib.h>
unsigned long long int count_rice(int);

int main(void)
{
	int n;
	scanf("%d", &n);
	if (n>0 && n<=64)
	{
		printf("%llu", count_rice(n));
		return 0;
	}
	return 1;
}
unsigned long long int count_rice(int n)
{
	unsigned long long int count=1llu;
	if (n==1)
		count=1ull;
	else
	{
		for (int i = 1; i<n; i++)
			count*=2llu;
		
	}
	
	return (count<0) ? -count : count;
}
