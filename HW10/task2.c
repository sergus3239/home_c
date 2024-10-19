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
	int N;
	fscanf(input_File, "%d", &N);
	fclose(input_File);
	if (N % 2 != 0 || N > 26)
	{
		return -1;
	}
	char res[N+1];
	char letter = 'A';
	int Digit = 2;
	for (int i = 0; i < N; i++) {
		if (i % 2 != 0)
		{
			res[i] = letter; 
			letter++;
		}
		else
		{
			res[i] = Digit + '0'; 
			Digit += 2;
			if (Digit > 8)
			{
				Digit = 2;
			}
		}
	}
	res[N] = '\0';
	fprintf(output_File, "%s\n", res);
	fclose(output_File);
	return 0;
}
