#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
void simple_rec(int,int);

int main()
{
	int n;
	scanf("%d",&n);
	simple_rec(n, 2);
	return 0;
}

void simple_rec(int n, int div)
{
	if (n==1)
		return;
	if(n%div==0)
	{
		printf("%d ",div);
		simple_rec(n/div, div);
		//printf("%d ",div);
	}
	else
		simple_rec(n, div+1);

}

/*
void print simple(int n)
{
	int div=2;
	while (n!=1)
	{
		if(n%div==0)
		{
			printf("%d ",div);
			n/=div;
		}
		else
			div+=1;
	}
} 
*/

