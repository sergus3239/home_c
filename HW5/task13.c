#include <stdio.h>
//#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	int count1=0;
	int count2=0;
	while (number > 0)
	{
		if (number % 10%2 == 1) // цифра явл. нечётной
		{
			count1++;
		}
		else // цифра явл. чётной
		{
			count2++;
		}
		number /= 10;
	}
	printf("%d %d", count2, count1);
	return 0; 
}
