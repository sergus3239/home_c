#include <stdio.h>
#include <stdint.h>
int main(void)
{
	int a, f1 = 0, f2 = 1, sumf = 0;
	scanf("%d", &a);
	printf("%d ", f1 + f2);
	for (int i = 1; i <= a - 1; i++)
	{
		sumf = f1 + f2;
		printf("%d ", sumf);
		f1 = f2;
		f2 = sumf;
	}
	return 0;
}


