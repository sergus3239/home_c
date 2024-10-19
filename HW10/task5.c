#include <stdio.h>
#include <string.h>

int const MAX_SIZE=1000;

void replace_aA_bB(char str[], char res[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			res[i] = 'b';
		else if (str[i] == 'b')
			res[i] = 'a';
        else if (str[i] == 'A')
			res[i] = 'B';
		else if (str[i] == 'B')
			res[i] = 'A';
		else
			res[i] = str[i];
		i++;
	}
	res[i] = '\0';
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
	replace_aA_bB(str, res);
	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
		return -1;
	fprintf(output_File, "%s\n ", res);
	fclose(output_File);
	return 0;
}

