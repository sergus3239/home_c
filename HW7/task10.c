#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int is_prime_rec(int, int);

int main(void)
{
	int number;
	scanf("%d",&number);
	if (is_prime_rec(number, 2))
		printf("YES");
	else
		printf("NO");
	return 0;
}
	
int is_prime_rec(int number, int div)
{
//	if (number <= 1) 
//		return -1; 
	if (number==div)
		return -1; 
	if ((number>1) && (number%div!=0))
		return is_prime_rec(number, div+1);
		else
			return 0;
}

