#include <stdio.h>
//#include <stdint.h>
#include <stdlib.h>
int main()
{
	int number, revers_number=0;
	scanf("%d", &number);
	while (number>0)
	{
		int n=number%10;  // Получаем последнюю цифру введенного числа
		revers_number=revers_number*10+n;  // Добавляем цифру числа наоборот
		number/=10;
	}
	printf("%d\n", revers_number);
	return 0;
}
