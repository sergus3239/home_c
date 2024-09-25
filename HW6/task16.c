#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int is_prime(int);

int main(void)
{
	int number;
	scanf("%d",&number);
	if (is_prime(number))
		printf("YES");
	else
		printf("NO");
	return 0;
}
	
int is_prime(int number)
{
	if (number <= 1) 
	{
		return 0; 
	}
	// int flag=1;
	for (int i = 2; i*i <= number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
