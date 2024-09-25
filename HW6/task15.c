#include <stdio.h>
#include <stdlib.h>
int grow_up(int);

int main(void)
{
int n;
	scanf("%d", &n);
	switch (grow_up(n))
	{
		case 0:
			printf("NO");
			break;
		case 1:
			printf("YES");
			break;
		default:
			printf("default");
	}
	return 0;
}

int grow_up(int n)
{
//	int n1, n2;
	int n1=n % 10;
	while (n > 0)
	{
		int n2=((n-n1)/10)%10;
		if (n1<=n2)
			return 0; 
		else
		{
			n1=n2;
			n/=10;
		}
	}
	return 1;
}

