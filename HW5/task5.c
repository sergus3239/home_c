#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	if (number>=0)
		{
			int sumNumerals=0;
			for (; number>0; number/=10)
			{
				sumNumerals+=number%10;
			}
			printf("%d", sumNumerals);
			return 0;
		}
	else
		return 1;	
}  
                               
