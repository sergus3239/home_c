#include <stdio.h>
#include <string.h>
int const MAX_SIZE=1000;

int main()
{
	FILE *input_File = fopen("input.txt", "r");
	if (input_File == NULL)
		return -1;
	
	char str[MAX_SIZE+1];
	fgets(str, sizeof(str), input_File);
	fclose(input_File);

	FILE *output_File = fopen("output.txt", "w");
	if (output_File == NULL)
		return -1;
		
	char *word = strtok(str, " \n");
	while (word != NULL)
	{
		fprintf(output_File, "%s\n", word);
		word = strtok(NULL, " \n");
	}
	fclose(output_File);
	return 0;
}
