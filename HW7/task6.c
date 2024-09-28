#include <stdio.h>
void reverse_string(void) 
{
	
	char ch;
	scanf("%c", &ch);
	if(ch !='.')
	{
		//printf("%c",ch);
		reverse_string();
		printf("%c",ch);
	}
}

int main(void)
{
	reverse_string(); 
	return 0;
}


