#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int main(void)
{
char a=' ';
	for(scanf("%c", &a) ; a != '.' ; scanf("%c", &a))
	{
		if ( a >='A' &&  a <= 'Z')
			a += 0x20;
//		if  (a != '.')
			printf("%c", a);
	}
	return 0;
}

