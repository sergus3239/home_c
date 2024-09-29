#include <stdio.h>
//#include <stdlib.h>
int acounter(void);

int main(void)
{
	//char ch = getchar();
	int count = acounter();
	printf("%d\n", count);
	return 0;
}
int acounter(void)
{
	char ch = getchar();
	if(ch == '.')
		return 0;
	if(ch == 'a')
		return 1 + acounter();
	else
		return acounter();
}
