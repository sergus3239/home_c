#include <stdio.h>            
int main(void)
{
	int a,b,c,d,f,min,max;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    max = a>b ? a : b; 
    max = max>c ? max : c;
    max = max>d ? max : d;
    max = max>f ? max : f; 
    min = a<b ? a : b; 
    min = min<c ? min : c;
    min = min<d ? min : d;
    min = min<f ? min : f; 
    printf("%d",max+min);
	return 0;
}                                 
