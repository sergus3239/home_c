#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	number=abs(number); // приведём к модулю
	int count=0;
	while (number > 0)
	{
		if (number % 10 == 9)
		{
			count++; 
		}
		if (count > 1) // Если больше одной '9'
		{
			printf("NO");
			break;
		}
		number /= 10;
	}
	if (count==1) // Если одна '9'
	{
		printf("YES");
	}
	if (count==0) // Если ни одной '9'
	{
		printf("NO");
	}
	return 0; 
}
