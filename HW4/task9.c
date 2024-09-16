#include <stdio.h>            
int main(void)
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a<b+c && a>b-c)&&(b<a+c && b>a-c)&&(c<b+a && c>b-a)) 
		{
			printf("YES");
		}
    else  
		{
			printf("NO");
		}
	return 0;
}  
                               
