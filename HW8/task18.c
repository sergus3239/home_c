#include <stdio.h>            
//#include <stdlib.h>

int count_Mult(int N, int d)
{
	int count = 0;
	for (int i = 2; i <= N; i++)
	{
		if (i % d == 0)
			count++;
	}
	return count;
}
void Multiples(int N) 
{
	for (int d = 2; d <= 9; d++)
	{
		int count = count_Mult(N, d);
		printf("%d %d\n", d, count);
	}
}


int main()
{
	int N;
	scanf("%d", &N);
	if (N < 2 || N > 10000)
		return -1;
	Multiples(N);
	return 0;
}
