#include <stdio.h>            
//#include <stdlib.h>

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	return i;
}

void often_repeat_Digit(int n, int arr[])
{
	int count, temp, often = 1, often_digit = 0;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				temp = arr[i]; 
			}
		}
		if (often < count)
		{
			often = count;
			often_digit = temp;
		}
	}
	printf("%d ", often_digit);
}

int main()
{
	enum {n = 10};
	int arr[n] = {0};
	Input_Arr(n, arr);
	often_repeat_Digit(n, arr);
	return 0;
}
