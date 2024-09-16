#include <stdio.h>            
int main(void)
{
	int a,b,c,d,f,min;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&f);
    min = a<b ? a : b; 
    min = min<c ? min : c;
    min = min<d ? min : d;
    min = min<f ? min : f; 
    printf("%d",min);
	return 0;
}                                 
