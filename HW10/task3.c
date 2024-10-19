#include <stdio.h>
#include <string.h>

int main()
{
	FILE *input_File = fopen("input.txt", "r");
	if (input_File == NULL)
		return -1;
	char str[1001];
	fgets(str, sizeof(str), input_File);
	fclose(input_File);
	int length = strlen(str);
	if (length == 0) {
		return -1;
	}
	if (str[length - 1] == '\n')
	{
		str[length - 1] = '\0';
		length--;
	}
	char lastChar = str[length - 1];
	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
		return -1;
	for (int i = 0; i < length-1; i++)
	{
		if (str[i] == lastChar) {
			fprintf(output_File, "%d ", i);
		}
	}
	fclose(output_File);
	return 0;
}

