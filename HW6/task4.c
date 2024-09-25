#include <stdio.h>
#include <stdlib.h>
int func(int);

int main(void)
{
	int x,max=0;
	do
	{
		scanf("%d", &x);
		if (func(x)>max)
			max=func(x);
	}
	while (x!=0);
	printf("%d", max);
	return 0;
}

int func(int x)
{
	int f=0;
	if (x>=-2 && x<2)
		return f=x*x;
	if (x>=2)
		return f=x*x+4*x+5;
	if (x<-2)
		return f=4;
	return 0;
}
