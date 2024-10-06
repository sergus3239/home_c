#include <stdio.h>            
//#include <stdlib.h>

int get_TwoEndDigit(int);

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	return i;
}

int get_TwoEndDigit(int n)
{
	return (n/10 % 10);
}
int Count_nullDigit(int n, int arr[])
{
	int count=0;
	for (int i = 0; i < n; i++)
	{
		if (get_TwoEndDigit(arr[i]) == 0)
		{	
			count++;
		}
	}
	return count;
}
void New_nulldigitArr(int k, int n, int arr[])
{
	int j = 0;
	int new_arr[k];
	for (int i = 0; (i < n) && (j < k); i++)
	{
		if (get_TwoEndDigit(arr[i]) == 0)
		{
			new_arr[j] = arr[i];
			printf("%d ", new_arr[j]);
			j++;
		}	
	}
}

/*
void Print_Arr(int n, int arr[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
*/
int main()
{
	enum {n = 10};
	int arr[n] = {0};
	Input_Arr(n, arr);
	int k = Count_nullDigit(n, arr);
	New_nulldigitArr(k, n, arr);
	//Print_Arr(k, new_arr);
	return 0;
}
