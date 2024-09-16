#include <stdio.h>            
int main(void)
{
	int a,b,c,d,f,max;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    max = a>b ? a : b; 
    max = max>c ? max : c;
    max = max>d ? max : d;
    max = max>f ? max : f; 
    printf("%d",max);
	return 0;
}                                 
