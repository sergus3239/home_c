#include <stdio.h>            

int countDigits(int num)
{
	int count = 0;
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
void number_To_Arr(int num, int n, int arr[])
{
	for (int i = n - 1; i >= 0; i--)
	{
		arr[i] = num % 10;
		num /= 10;
	}
}
void Sort_Decr(int n, int arr[])
{
	for (int i=0; i < n-1; i++)
	{
		for (int j = 0; j < n - i-1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void Print_Arr(int n, int arr[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int Arr_To_Number(int n, int arr[])
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		num = num * 10 + arr[i];
	}
	return num;
}
int main()
{
	int num;
	scanf("%d", &num);
	int n = countDigits(num);
	int arr[n];
	number_To_Arr(num, n, arr);
	Sort_Decr(n, arr);
	int maxNum = Arr_To_Number(n, arr);
	printf("%d\n", maxNum);
	return 0;
}
