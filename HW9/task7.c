#include <stdio.h>            
//#include <stdlib.h>
int Input(int N, int a[]) 
{
int i;
	for(i=0; i<N; i++)
	scanf("%d",&a[i]);
	return N;
}
int compression(int a[], int b[], int N)
{
	int count = 1;
	int j = 0;
	if (a[0] == 1)
	{
		b[j++] = 0;
	}
	for (int i = 1; i < N; i++)
	{
		if (a[i] == a[i - 1])
		{
			count++;
		}
		else
		{
			b[j++] = count; 
			count=1;
		}
	}
	b[j++] = count; 
	return j;
}
void Print(int M, int b[])
{
	printf("[");
	for (int i = 0; i < M; i++)
	{
		if (i>0)
		{
			printf(", ");
		}
		printf("%d",b[i]);
	}
	printf("]\n");
}

int main()
{
	enum {N = 100};
	int a[N], b[100];
	Input(N, a);
	int M = compression(a, b, N);
	Print(M, b);
	return 0;
}
