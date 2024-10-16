
#include <stdio.h>            
#include <stdint.h>
char Input(char number[]) 
{
	int r;
	scanf("%1000s", number);
	r = scanf("%[0-9]", number);
	if (r==1)
		return *number;
	else
		return -1;
}

void number_incr_count(const char num[])
{
	int count[10]={0};
	for(int i=0; num[i]!='\0'; i++)
	{
		if(num[i]>='0' && num[i]<='9')
		{
			count[num[i]-'0']++;
		}
	}
	for (int i = 0; i <= 9; i++)
	{
		if (count[i] > 0)
		{
			printf("%d %d\n", i, count[i]);
		}
	}
}

int main()
{
	char number[1001];
	Input(number);
	number_incr_count(number);
	return 0;
}
