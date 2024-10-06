#include <stdio.h>            
//#include <stdlib.h>

int Input_Arr(int n, int arr[]) 
{
int i;
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
	return i;
}

void unrepeat_Digit(int n, int arr[])
{
	int count;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	enum {n = 10};
	int arr[n] = {0};
	Input_Arr(n, arr);
	unrepeat_Digit(n, arr);
	//Print_Arr(size, repeat_arr);
	return 0;
}
