#include <stdio.h>  
#include <stdint.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	if (number>=1 && number<=100)
		{
			for (int i=1;i<=number;i++)
				printf("%d %d %d \n",i,i*i,i*i*i);
			return 0;
		}
	else 
		return 1; // Выход за пределы области определения 
	
}  
                               
