#include <stdio.h>
int sum_digits(int n) 
{
	int sum=n%10;
	if(n>0)
		sum+=sum_digits(n/10);
		//printf("%d \n",sum);
	return sum;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d",sum_digits(n)); 
	return 0;
}
