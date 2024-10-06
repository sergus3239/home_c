#include <stdio.h>            

int countDigits(int num) //подсчет кол-ва цифр в числе
{
	int count = 0;
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
void number_To_Arr(int num, int n, int arr[]) // перевод числа в массив
{
	for (int i = n - 1; i >= 0; i--)
	{
		arr[i] = num % 10;
		num /= 10;
	}
}

void Print_Arr(int n, int arr[]) // вывод массива
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main()
{
	int num;
	scanf("%d", &num);
	int n = countDigits(num);
	int arr[n];
	number_To_Arr(num, n, arr);
	Print_Arr(n, arr);
	return 0;
}
