#include <stdio.h>            
//#include <stdlib.h>

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	return i;
}
/*
int Control_Range(int n, int arr[])
{
	for(int i=0; i<n; i++)
	{
		if (arr[i] < -500 || arr[i] > 500)
			return -1;
		else
			return 0;
	}
} 
*/
void sign_Digit(int n, int arr[], int *size1, int positive_arr[], int *size2, int negative_arr[])
{
	//int count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++)
	{
		//count1 = 0;
		//count2 = 0;
		//for (int k = 0; k < *size; k++)
		//{
		if (arr[i] > 0)
		{
			positive_arr[*size1] = arr[i];
			(*size1)++;
			//break;
		}
		if (arr[i] < 0)
		{
			negative_arr[*size2] = arr[i];
			(*size2)++;
			//break;
		}
	}
}

void Print_Arr(int size, int repeat_arr[])
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ",repeat_arr[i]);
	//printf("\n");
}

int main()
{
	enum {n = 10};
	int arr[n] = {0};
	for(int i=0; i<n; i++)
	{
		if (arr[i] < -500 || arr[i] > 500)
			return -1;
	}
	int positive_arr[n];
	int negative_arr[n];
	int size1 = 0;
	int size2 = 0;
	Input_Arr(n, arr);
	//Control_Range(n, arr);
	sign_Digit(n, arr, &size1, positive_arr, &size2, negative_arr);
	Print_Arr(size1, positive_arr);
	Print_Arr(size2, negative_arr);
	return 0;
}
