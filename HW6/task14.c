#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int sumNumerals(int);

int main(void)
{
	int number;
	scanf("%d",&number);
	if (sumNumerals(number))
		printf("YES");
	else
		printf("NO");
	return 0;
}
	
int sumNumerals(int number)
{
	int sum_Num=0, flag=0;
	for (; number>0; number/=10)
	{
		sum_Num+=number%10;
	}
	if (sum_Num %2 == 0) // цифра явл. чётной
		return flag=1;
	return flag;
}
