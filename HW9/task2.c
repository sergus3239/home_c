
#include <stdio.h>            
#include <stdint.h>
int Input(int n, int a[]) 
{
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	return i;
}

void sort_even_odd(int n, int a[])
{
	int temp[n];
	int even_index = 0, odd_index = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
		{
			temp[even_index++] = a[i];
		}
	}
	odd_index=even_index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			temp[odd_index++] = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}

void Print(int n, int a[])
{
	for (int i = 0; i < n; i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	enum {n = 20};
	int a[n] = {0};
	Input(n, a);
	sort_even_odd(n, a);
	Print(n, a);
	return 0;
}
