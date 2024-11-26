#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "temp_api.h"

// Справочная информация (реализована функцией)

void printHelp()
{
	printf("Usage: ./prog_temp.exe -f <file> [-m <month>] [-h]\n"); 
	printf("Parameters:\n");  
	printf("-h Show this help message and exit.\n"); 
	printf("-f <file> Specify the input CSV file with the data\n"); 
	printf("-m <month> Specify the month (1-12) to show statistics for.\n"); 
	printf("NULL (no parameter): Show Usage Messages!\n"); 
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, ""); 
	printf("ПРОЕКТ: Температурный сенсор\n");
	char *filename = "null";
	int month = 0;
		
	// Обработка аргументов командной строки
	
	// Если аргументов нет (только имя программы)
	if (argc == 1)
	{
       	printf("No arguments provided.\n");
       	printHelp();
       	return 0;
   	}
	for (int i = 1; i < argc; i++)
	{
		
    	if (strcmp(argv[i], "-h") == 0)
		{
			printHelp();
			return 0;
		}
		else if (strcmp(argv[i], "-f") == 0) // && i + 1 <= argc)
		{
			filename = argv[++i];
			printf("filename: %s\n", filename);
		}
		// Сравнение посимвольно двух строк(функция strcmp), переданных в качестве аргументов
		else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) 
		{
			// Преобразование (функция atoi)  строки string в целое значение типа int
			month = atoi(argv[++i]); 
		}
	}


	if (!filename)
	{
		printf("Error: The file is not specified.\n"); 
 		return 1;
	}

	// Чтение данных из файла
	int size;
	TempData *data = createTempArray(filename, &size);
	if (!data)
	{
		printf("Error reading the file.\n"); 
		return 1;
	}
	// Вывод на консоль структурированного массива данных
	// по заданному шаблону (printTempData), 
	//результатов сортировки по значению температуры (sortTempData)
	
	// В случае запуска с файлом данных большого объёма - закомментировать функцию printTempData
	//printTempData(data, size);
	/*
	printf("Sorted data by increasing temperature\n");
	sortTempData(data, size);
	*/
	
	// Вывод статистики за заданный период (месяц, год)
		if (month > 0)
	{
		printf("\nAverage monthly temperature: %3.2f C\n", averageMonthlyTemp(data, size, month)); 
		printf("Minimum monthly temperature: %5d C\n", monthlyMin(data, size, month)); 
		printf("Maximum monthly temperature: %5d C\n", monthlyMax(data, size, month)); 
	} 
	else 
	{
		printf("\nAverage temperature for the year: %3.2f C\n", averageYearlyTemp(data, size)); 
		printf("Minimum temperature for the year: %5d C\n", yearlyMin(data, size)); 
		printf("Maximum temperature for the year: %5d C\n", yearlyMax(data, size)); 
	}
	free(data);
	return 0;
}