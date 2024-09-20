#include <stdio.h>  
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int a, b;
	scanf("%d %d",&a, &b);
	if (abs(a)>=0&&abs(a)<=100&&abs(b)>=0&&abs(b)<=100&&a<=b)
		{
			int sumqwerty=0;
			for (int i=a;i<=b;i++)
			{
				sumqwerty+=i*i;
			}
			printf("%d \n",sumqwerty);
			return 0;
		}
		else 
			return 1; // Выход за пределы области определения чисел 
	
}
                               
