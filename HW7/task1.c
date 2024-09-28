#include <stdio.h>
void print_num_rec(int n) 
{
	if(n>1)
	{
		print_num_rec(n-1);
	}
	printf("%d ",n);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	print_num_rec(n); 
	return 0;
}


