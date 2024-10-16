#include <stdio.h>            
#include <stdint.h>
int Input(int n, int a[]) 
{
	int i;
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	return i;
}
void sort_array(int n, int a[])
{
	int temp = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
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
	sort_array(n, a);
	Print(n, a);
	return 0;
}
