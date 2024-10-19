#include <stdio.h>
#include <string.h>

int main()
{
	FILE *input_File = fopen("input.txt", "r");
	FILE *output_File = fopen("output.txt", "w");
	if (input_File == NULL || output_File == NULL)
	{
		printf("Ошибка при открытии файла!\n");
		return -1;
	}
	char str[101];
	fgets(str, 101, input_File);
	str[strcspn(str, "\r\n")] = 0;
	int length = strlen(str);
	fprintf(output_File, "%s, %s, %s, %d\n", str, str, str, length);
	fclose(input_File);
	fclose(output_File);
	return 0;
}

