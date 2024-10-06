#include <stdio.h>            
//#include <stdlib.h>

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	return i;
}

void repeat_Digit(int n, int arr[], int *size, int repeat_arr[])
{
	int count;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int k = 0; k < *size; k++)
		{
			if (repeat_arr[k] == arr[i])
			{
				count = 1;
				break;
			}
		}
		if (!count)
		{
			int count2 = 0;
			for (int j = 0; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count2++;
				}
			}
			if (count2 > 1)
			{
				repeat_arr[*size] = arr[i];
				(*size)++; 
			}
		}
	}
}

void Print_Arr(int size, int repeat_arr[])
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ",repeat_arr[i]);
	printf("\n");
}

int main()
{
	enum {n = 10};
	int arr[n] = {0};
	int repeat_arr[n];
	int size = 0;
	Input_Arr(n, arr);
	repeat_Digit(n, arr, &size, repeat_arr);
	Print_Arr(size, repeat_arr);
	return 0;
}
