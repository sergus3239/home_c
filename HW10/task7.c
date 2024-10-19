#include <stdio.h>
#include <string.h>
int const MAX_SIZE=10000;
int is_Palindrome(char str[]);

int main()
{
	FILE *input_File = fopen("input.txt", "r");
	if (input_File == NULL)
	{
		return -1;
	}
	char str[MAX_SIZE+1];
	fgets(str, sizeof(str), input_File);
	fclose(input_File);
	int low_count = 0;
	int upp_count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			low_count++;
		}
		else if (str[i]>='A' && str[i]<='Z')
		{
			upp_count++;
		}
	}
	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
	{
		return -1;
	}
	fprintf(output_File, "%d %d\n", low_count, upp_count);
	fclose(output_File);
	return 0;
}
