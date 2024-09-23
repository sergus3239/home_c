#include <stdio.h>
int main(void)
{
	int a,b, mult;
	scanf("%d%d", &a, &b);
	for (int i=1; a > 0 && b > 0; i++)
	{
		a > b ? a%=b : (b%=a);
	}
	mult=!a ? b : a;
	printf("%d\n", mult);
	return 0;
}
