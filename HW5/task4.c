#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d", &number);
	if (number >=0)
	{
		if (number >= 100 && number <= 999) 
		{
			printf("YES \n");
		} 
		else 
			printf("NO \n");
        return 0; 
    }
	else
		return 1;
}  
                               
