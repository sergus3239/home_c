#include <stdio.h>
//#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	int number;
	scanf("%d",&number);
	number=abs(number); // приведём к модулю
	int n1=number % 10; //последняя цифра
	//int n2;
	while (number > 0)
	{
		int n2=((number-n1)/10)%10; // предпоследняя цифра
		if (n1<=n2) // цифры идут не по возрастанию
		{
			printf("NO");
			return 0; 
		}
		else
		{
			n1=n2;
			number/=10;
		}
	}
	printf("YES");
	return 0; 
}
