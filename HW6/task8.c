#include <stdio.h>
//#include <stdlib.h>
char up_letter(char);

int main(void)
{
	char b;
	while (1)
	{
		scanf("%c", &b);
		if (b=='.')
			break;
		printf("%c", up_letter(b));
	}
	return 0;
}
char up_letter(char a)
{
	return ((a >= 'a') && (a <= 'z')) ? (a - 0x20) : a;
}
