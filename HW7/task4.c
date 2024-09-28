#include <stdio.h>
void reverse_num(void) 
{
	
	char num;
	scanf("%c", &num);
	if(num >='0'&& num <='9')
	{
		printf("%c ",num);
		reverse_num();
		//printf("%c ",num);
	}
}

int main(void)
{
	reverse_num(); 
	return 0;
}


