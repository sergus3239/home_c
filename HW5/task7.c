#include <stdio.h>  
#include <stdint.h>
#include <stdlib.h>
int main()
{
	int number;
	scanf("%d",&number);
	number=abs(number); // Приведём к модулю чтобы игнорировать знак
	for (int digit = 0; digit <10; digit++)
		{
			int temp = number;
			int count = 0;  // Переменная для подсчета появления цифры
			while (temp>0)
				{
					if (temp % 10 == digit)
						{
							count++;  // Увеличиваем счетчик, если цифра совпадает
						}
					if (count > 1) 
						{
							printf("YES");
							return 0;
							break;
						}
					temp /= 10; 
				}
		}
	printf("NO");
	return 0;
}  
                               
