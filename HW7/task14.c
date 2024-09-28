#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
void odd_numbers();

int main()
{
	odd_numbers();
		printf("\n");
	return 0;
}
	
void odd_numbers()
{

	int n;
	scanf("%d", &n);
	if (n == 0)
	{
		return;
	}
	if (n%2!=0)
	{
		 printf("%d ", n);
	}
	odd_numbers();
}


