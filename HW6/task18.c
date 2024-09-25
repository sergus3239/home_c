#include <stdio.h>  
//#include <math.h>
//#include <stdlib.h>
char is_digit(char);

int main()
{
int count = 0;
char c;
	while (1)
	{
		scanf("%c", &c);
		if (c == '.')
			break;
		if (is_digit(c))
			count++;
	}
	printf("%d", count);
	return 0;
}
char is_digit(char c)
{
	return c >= '0' && c <= '9';
}


