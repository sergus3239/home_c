#include <stdio.h>
int sum_num_rec(int n) 
{
	if(n>1)
		return n+sum_num_rec(n-1);
	return 1;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d",sum_num_rec(n)); 
	return 0;
}


