#include <stdio.h>            
//#include <stdlib.h>
int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	return i;
}
void Sum_Positive_elements_Arr(int n,int arr[])
{
	int i, sum_positive = 0;
	for (i = 0; i < n; i++)
		if (arr[i] > 0)
			sum_positive += arr[i];
	printf("%d\n", sum_positive); 
}
/*
void TwoMax_Arr(int n,int arr[])
{
	int max1, max2;
	max1 = arr[0];
	max2 = arr[1];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max1)
		{
			max2 = max1;
			max1 = arr[i];
		}
		else if (arr[i] > max2)
			max2 = arr[i];
	}
	printf("%d\n", max1 + max2);
}

void Max_Arr(int n, int arr[])
{
	int max = arr[0], pos_max=1, i;
	for (i = 1; i < n; i++)
		if (max < arr[i])
		{
			max = arr[i];
			pos_max=i+1;
		}	
	printf("%d %d ", pos_max, max);
}

void Min_Arr(int n, int arr[])
{
	int min = arr[0], pos_min=1, i;
	for (i = 1; i < n; i++)
		if (min > arr[i])
		{
			min = arr[i];
			pos_min=i+1;
		}
	printf("%d %d\n", pos_min, min); 
}


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
	enum {n = 10};
	int arr[n];
	Input_Arr(n, arr);
	//Average_Arr(n, arr);
	//Print_Arr(n, arr);
	//Max_Arr(n, arr);
	//Min_Arr(n, arr);
	//TwoMax_Arr(n,arr);
	Sum_Positive_elements_Arr(n,arr);
	return 0;
}
