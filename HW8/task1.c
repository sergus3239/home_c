#include <stdio.h>            
//#include <stdlib.h>
int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	return i;
}

void Average_Arr(int n, int arr[]) 
{
	int sum=0, i;
	for(i=0;i<n;i++)
		sum+=arr[i];
	printf("%.3f\n",(float)sum/n);
	//return (float)sum/n;
}

int main()
{
	enum {n = 5};
	int arr[n];
	Input_Arr(n, arr);
	Average_Arr(n, arr);
	//Print_Arr(n, arr);
	return 0;
}
