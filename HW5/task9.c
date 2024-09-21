#include <stdio.h>
//#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	number=abs(number); // приведём к модулю
	//int count=0;
	while (number > 0)
	{
		if (number % 10%2 == 1) // цифра не явл. чётной
		{
			printf("NO");
			return 0; 
		}
		else
		{
			number /= 10;
		}
	}
	printf("YES");
	return 0; 
}
