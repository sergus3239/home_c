#include <stdio.h>  
//#include <math.h>
#include <stdlib.h>
int balance()
{
	char c;
	int balance=0;
	int sum=0;
	while ((c = getchar()) != '.')
	{
		sum+=1;
		if (c == '(')
		{
			balance++;  // Открывающая скобка увеличивает баланс
		}
		else if (c == ')')
		{
			balance--;  // Закрывающая скобка уменьшает баланс
		}
	}	
	if (sum>1000)
	{
		return -1;
	}
	if (balance != 0)
	{
		return 0;
	}
	else
	{
		return balance==0;
	}
}
int main()
{
	if (balance())
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}



