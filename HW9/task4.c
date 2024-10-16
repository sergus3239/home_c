
#include <stdio.h>            
#include <stdint.h>

void print_digit(char s[])
{
	int count[10]={0};
	for(int i=0; s[i]!='\0'; i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			count[s[i]-'0']++;
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
	char s[101];
	gets(s);
	print_digit(s);
	return 0;
}
