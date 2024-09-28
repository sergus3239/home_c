#include <stdio.h>
void reverse_num_rec(int n) 
{
	if(n>0)
	{
		printf("%d ",n);
		reverse_num_rec(n-1);
	}
	//printf("%d ",n);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	reverse_num_rec(n); 
	return 0;
}


