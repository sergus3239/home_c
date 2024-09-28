#include <stdio.h>
#include <stdlib.h>
void grow_up_rec(int a,int b)
{
	if (a<b)
	{
		printf("%d ", a);
		grow_up_rec(a+1, b);
	}
	
	else if (a>b)
	{
		printf("%d ", a);
		grow_up_rec(a-1, b);
	}
	else
	{
		printf("%d\n", a);
	}
}

int main(void)
{
int a, b;
	scanf("%d %d", &a, &b);
	grow_up_rec(a, b);
	return 0;
}
