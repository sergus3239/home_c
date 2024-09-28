#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int recurs_power(int, int);

int main()
{
	int n, p;
	
	scanf ("%d %d", &n, &p);
	if (n>=-100 && n<=100 && p>=0 && p<=100)
	{
		printf ("%d",recurs_power(n, p));
		return 0;
	}
	return -1;
}

int recurs_power(int n, int p)
{
	if (p == 0)
		return n = 1;
	return n*(recurs_power(n, p-1));
}

/* код функции из HW6/tasr2:
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
*/

