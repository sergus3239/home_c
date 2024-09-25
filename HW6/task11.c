#include <stdio.h>
#include <stdlib.h>
int nod(int, int);

int main(void)
{
int a,b;
	scanf("%d%d", &a, &b);
	printf("%d\n", nod(a, b));
	return 0;
}

int nod(int a, int b)
{
	int delit;
	for (int i=1; a > 0 && b > 0; i++)
	{
		a > b ? a%=b : (b%=a);
	}
	delit=!a ? b : a;
	return delit;
}

