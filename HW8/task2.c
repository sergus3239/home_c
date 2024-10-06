#include <stdio.h>            
//#include <stdlib.h>
int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	return i;
}
void Min_Arr(int n, int arr[])
{
	int min = arr[0], i;
	for (i = 1; i < n; i++)
		if (min > arr[i])
			min = arr[i];
	printf("%d\n", min); 
}
/*
void Print_Arr(int n, int arr[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void Average_Arr(int n, int arr[]) 
{
	int sum=0, i;
	for(i=0;i<n;i++)
		sum+=arr[i];
	printf("%.3f\n",(float)sum/n);
	//return (float)sum/n;
}
*/
int main()
{
	enum {n = 5};
	int arr[n];
	Input_Arr(n, arr);
	//Average_Arr(n, arr);
	//Print_Arr(n, arr);
	Min_Arr(n,arr);
	return 0;
}
