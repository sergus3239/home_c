#include <stdio.h>
#include <string.h>

int const MAX_SIZE=1000;
void remove_repeats_spaces(char str[], char res[])
{
	int ascii[256] = {0};
	int j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		char ch = str[i];
		if (ch == ' ')
		{
			continue;
		}
		if (!ascii[(unsigned char)ch])
		{
			ascii[(unsigned char)ch] = 1;
			res[j++] = ch; 
		}
	}
	res[j] = '\0';
}

int main()
{
 FILE *input_File = fopen("input.txt", "r");
	if (input_File == NULL)
		return -1;
	char str[MAX_SIZE + 1];
	fgets(str, sizeof(str), input_File);
	fclose(input_File);
	char res[MAX_SIZE + 1];
	remove_repeats_spaces(str, res);

	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
	{
		return 1;
	}

	fprintf(output_File, "%s\n", res);
	fclose(output_File);
	return 0;
}
