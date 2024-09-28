#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
#include <stdbool.h>
bool is2pow(int);

int main()
{
	int n;
	scanf("%d", &n);
	if (is2pow(n))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
	
bool is2pow(int n)
{
	if (n == 1)
	{
		return true;
	}
	if (n % 2 != 0 || n < 1)
	{
		return false;
	}
	return is2pow(n / 2);
}


