#include <stdio.h>  
//#include <stdint.h>
//#include <stdlib.h>
int monoton_sequence(int, int);

int main(void)
{
	int n;
	scanf("%d",&n);
	monoton_sequence(1, n);
	return 0;
}
	
int monoton_sequence(int k, int n)
{

	if (n <= 0)
	{
		return 1;
	}
	for (int i = 0; i < k && n > 0; i++)
	{
		printf("%d ", k);
		n--;
	}
	monoton_sequence(k+1, n);
}


