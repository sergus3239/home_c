#include <stdio.h>
int main(void)
{
	int number,count=0;
	do
	{
		scanf("%d", &number);
		if (number%2==0)
		{
			count++;
		}
	} while (number!=0);
	printf("%d", count-1);
	return 0;
}
