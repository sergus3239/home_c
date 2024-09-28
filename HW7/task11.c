#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int dec_to_bin_count(int n);

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",dec_to_bin_count(n));
	return 0;
}
	
int dec_to_bin_count(int n)
{
	if (n==0)
		return 0; 
	//printf("%d\n  %d\n", n%2, dec_to_bin_count(n/2));
	return (n%2)+dec_to_bin_count(n/2);
}


