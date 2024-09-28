#include <stdio.h>
void bin_num_rec(int num) 
{
	
	if(num >1)
	{
		//printf("%d",num%2);
		bin_num_rec(num/2);
	}
	printf("%d",num%2);
}

int main(void)
{
	int num;
	scanf("%d", &num);
	bin_num_rec(num); 
	return 0;
}


