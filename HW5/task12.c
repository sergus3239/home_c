#include <stdio.h>
//#include <stdint.h>
#include <stdlib.h>
int main()
{
	int number, max=0, min=9;
	scanf("%d", &number);
	while (number>0)
	{
		int digit=number%10;  // Получаем последнюю цифру введенного числа
		if (digit>max)
		{
			max=digit;
		}
		if (digit<min)
		{
			min=digit;
		}
		number/=10;
	}
	printf("%d %d\n", min, max);
	return 0;
}
