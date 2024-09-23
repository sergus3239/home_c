#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int main(void)
{
	int number, sumNumerals=0;
	scanf("%d",&number);
	for (; number>0; number/=10)
	{
		sumNumerals+=number%10;
	}
	if (sumNumerals==10)
		printf("YES");
	else
		printf("NO");
	return 0;
}
