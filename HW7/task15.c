#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int max_find(int max);

int main()
{
	//max_find(0);
	printf("%d",max_find(0));
	return 0;
}
	
int max_find(int max)
{
	int n;
	scanf("%d", &n);
	if (n == 0)
	{
		return max;
	}
	if ((n>max) || (max==0))
	{
		max=n;
	}
	return max_find(max);
}


