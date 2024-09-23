#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int main(void)
{
	int number, i;
	scanf("%d", &number);
	if(number == 1)
	{
		printf("NO\n");
		return 0;
	}
	for (i = 2; i < number; i++)
	{
		if(number % i == 0)
		{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
