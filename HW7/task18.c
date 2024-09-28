#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
//#include <stdbool.h>
void print_digits(int);

int main()
{
	int n;
	scanf("%d", &n);
	print_digits(n);
	return 0;
}
	
void print_digits(int n)
{
	if (n > 0)
	{
		//printf("%d ", n % 10);
		print_digits(n/10);
		printf("%d ", n % 10);
	}
}


