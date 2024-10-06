#include <stdio.h>            
//#include <stdlib.h>

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	return i;
}

/*
void Inversion_half_Arr(int n,int arr[])
{
	int i;
	int invers_arr[n];
	for (i = 0; i < n/2; i++)
	{
		invers_arr[i] = arr[n/2-i-1];
		invers_arr[i+n/2] = arr[n-i-1];
	}

	for (i = 0; i < n; i++)
		printf("%d ", invers_arr[i]);
	printf("\n");
}

void Sum_Positive_elements_Arr(int n,int arr[])
{
	int i, sum_positive = 0;
	for (i = 0; i < n; i++)
		if (arr[i] > 0)
			sum_positive += arr[i];
	printf("%d\n", sum_positive); 
}

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

void Average_Arr(int n, int arr[]) 
{
	int sum=0, i;
	for(i=0;i<n;i++)
		sum+=arr[i];
	printf("%.2f\n",(float)sum/n);
}

void Inversion_Arr(int n, int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void ShiftRight(int n, int arr[])
{
	int last = arr[n - 1];  
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = last;
}
*/

void ShiftRight_Four(int n, int arr[], int k)
{
	int temp[n];
	for (int i = 0; i < n; i++)
		temp[(i + k) % n] = arr[i];
	for (int i = 0; i < n; i++)
		arr[i] = temp[i];
}

void Print_Arr(int n, int arr[])
{
	int i;
	for (i = 0; i < n; i++)
	printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
	enum {n = 12};
	int arr[n] = {0};
	int k=4;
	Input_Arr(n, arr);
	ShiftRight_Four(n, arr, k);
	//ShiftRight(n, arr);
	//Inversion_Arr(n, arr, n-n, n/3-1);
	//Inversion_Arr(n, arr, n/3, 2*n/3-1);
	//Inversion_Arr(n, arr, 2*n/3, n-1);
	//Inversion_half_Arr(n, arr);
	//Average_Arr(n, arr);
	Print_Arr(n, arr);
	//Max_Arr(n, arr);
	//Min_Arr(n, arr);
	//TwoMax_Arr(n,arr);
	//Sum_Positive_elements_Arr(n,arr);
	return 0;
}
