#include <stdio.h>
int power(int n, int p)
{
	//int i, n;
	if (n==0)
		return p=1;
	if (n==1)
		return p;
	int i = 1,count=p;
	while (i<n)
	{
		p*=count;
		i++;
	}
	return p;
}
int main(void)
{
	int n,p;
	scanf ("%d %d", &p, &n);
	printf ("%d",power(n,p));
	return 0;
}
