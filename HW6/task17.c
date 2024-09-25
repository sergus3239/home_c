#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int sum_mult(int);

int main(void)
{
	int number;
	scanf("%d",&number);
	if (sum_mult(number))
		printf("YES");
	else
		printf("NO");
	return 0;
}
	
int sum_mult(int number)
{
	int sum=0, mult=1, i=number;
		for (; i>0; i/=10)
		{
			sum+=i%10;
			mult*=i%10;
		}
		if (sum==mult)
		{
			return 1;
		}
	return 0;
}

