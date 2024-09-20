#include <stdio.h>  
#include <stdint.h>
int main(void)
{
	int a, b;
	scanf("%d %d",&a, &b);
	if (a>=1&&a<=100&&b>=1&&b<=100&&a<=b)
		{
			for (int i=a;i<=b;i++)
				printf("%d ",i*i);
			return 0;
		}
	else 
		return 1; // Выход за пределы области определения чисел 
	
}  
                               
