#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d",&a);
	int mult=0;
	mult = a%10;
	mult *= (a/10)%10;
	mult *= (a/100)%10;
	printf ("%d",mult);
	return 0;
}
