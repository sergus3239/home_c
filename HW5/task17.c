#include <stdio.h>
#include <stdint.h>
int main(void)
{
int number;
	scanf("%d",&number);
	for (int a=10; a<=number; a++)
	{
		int sum=0, mult=1, i=a;
		for (; i>0; i/=10)
		{
			sum+=i%10;
			mult*=i%10;
		}
		if (sum==mult)
		{
			printf("%d ", a);
		}
	}
	return 0;
}

