#include <stdio.h>
//#include <stdlib.h>
int akkerman(int, int);

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d\n", akkerman(m, n));
	return 0;
}

int akkerman(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	} 
	else if (m > 0 && n == 0)
	{
		return akkerman(m - 1, 1);
	}
	else if (m > 0 && n > 0)
	{
		return akkerman(m - 1, akkerman(m, n - 1));
	}
	return 0;
}


