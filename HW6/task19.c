#include <stdio.h>  
//#include <math.h>
//#include <stdlib.h>
int digit_to_num(char);

int main()
{
int sum = 0;
char c;
	while (1)
	{
		scanf("%c", &c);
		if (c == '.')
			break;
		sum += digit_to_num(c);
	}
	printf("%d", sum);
	return 0;
}
int digit_to_num(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	return 0;
}


