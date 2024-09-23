#include <stdio.h>
int main(void)
{
	int number,count=0;
	do
	{
		scanf("%d", &number);
		count++;
	} while (number!=0);
	printf("%d", count-1);
	return 0;
}
