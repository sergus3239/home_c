#include <stdio.h>
#include <stdlib.h>
int sist_notation(int, int);

int main(void)
{
	int n, p;
	scanf("%d%d", &n, &p);
	printf("%d\n", sist_notation(n, p));
	return 0;
}
int sist_notation(int n, int p)
{
	int rem;
	int exp = 1;
	int res = 0;
	while (n>0)
	{
		rem = n % p;
		res += rem * exp;
		exp *= 10;
		n /= p;
	}
	return res;
}
