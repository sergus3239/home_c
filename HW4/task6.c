#include <stdio.h>            
int main(void)
{
	int number,a,b,c,max;
    scanf("%d",&number);
    a = number%10;
	b = (number/10)%10;
	c = (number/100)%10;
    max = a>b ? a : b;
    max = max>c ? max : c;
    printf("%d",max);
	return 0;
}                                 
