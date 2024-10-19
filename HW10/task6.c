#include <stdio.h>
#include <string.h>

int is_Palindrome(char str[]);

int main()
{
	FILE *input_File = fopen("input.txt", "r");
	if (input_File == NULL)
	{
		return -1;
	}
	char str[1001];
	fgets(str, sizeof(str), input_File);
	fclose(input_File);
	int length = strlen(str);
	if (length == 0)
	{
		return -1;
	}
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
		length--;
	}
	int res = is_Palindrome(str);
	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
	{
		return -1;
	}
	if (res)
	{
		fprintf(output_File, "YES\n");
	}
	else
	{
		fprintf(output_File, "NO\n");
	}
	fclose(output_File);
	return 0;
}
int is_Palindrome(char str[])
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		if (str[left] != str[right])
			return 0;
		left++;
		right--;
	}
	return 1;
}
