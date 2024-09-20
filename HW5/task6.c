#include <stdio.h>  
//#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	number=abs(number); // чтобы игнорировать знак
	int prev_digit = -1; // переменная для хранения предыдущей цифры 
    int flag = 0; // флаг-результат, сигнализирует о наличии одинаковых соседних цифр
	while (number>0)
		{
			int current_digit = number % 10;  // получаем последнюю цифру числа

			if (current_digit == prev_digit)
				{
					flag = 1; // 
					break;
				}
			prev_digit = current_digit; 
			number /= 10;  // удаляем последнюю цифру
		}
	if (flag) 
		{
			printf("YES");
		} 
	else 
		{
			printf("NO");
		}
    return 0;
}  
                               
