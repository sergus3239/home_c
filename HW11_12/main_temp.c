#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "temp_api.h"

// Справочная информация (реализована функцией)
void printHelp()
{
	printf("Usage: ./prog_temp.exe -f <file> [-m <month>] [-h]\n"); // printf("Использование: ./prog_temp.exe -f <файл> [-m <месяц>] [-h]\n");
	printf("Parameters:\n");  // printf("Параметры:\n");
	printf("-f <file> Specify the CSV file with the data\n"); // printf("-f <файл>     Указать файл CSV с данными\n");
	printf("-m <month>    Output statistics by month\n"); // printf("-m <месяц>    Вывод статистики по номеру месяца\n");
	printf("-h Show help\n"); // printf("-h    Показать справку\n");
}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, ""); // Функция кодировки в кирилицу не работает (почему?!!!)
	//SetConsoleCP(1251);     // Функция кодировки в кирилицу и ввода с консоли не работает (почему?!!!)
	//SetConsoleOutputCP(1251);  // Функция кодировки в кирилицу и вывода на консоль не работает (почему?!!!)
	// По причине не срабатывания функций перекодировки текстовых сообщений в кирилицу все варианты сообщений
	// на русском закоментированы и заменены на английские аналоги   
	printf("ПРОЕКТ: Температурный сенсор\n");
	char *filename = "null";
	int month = 0;
		
	// Обработка аргументов командной строки

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
			printf(filename);
			printf("\n");
		}
		// Сравнение посимвольно двух строк(функция strcmp), переданных в качестве аргументов
		else if (strcmp(argv[i], "-m") == 0 && i + 1 < argc) 
		{
			// Преобразование (функция atoi)  строкb string в целое значение типа int
			month = atoi(argv[++i]); 
		}
	}

	if (!filename)
	{
		printf("Error: The file is not specified.\n"); // printf("Ошибка: файл не указан.\n");
 		return 1;
	}

/*
	Набор структурированных данных о температуре (был создан и применялся для первой домашки по данному проекту)
	TempData data[16] = 
	{
		{2021, 1, 16, 1, 1, -47},
		{2021, 1, 16, 1, 3, -44},
		{2021, 1, 16, 1, 4, -43},
		{2021, 1, 16, 1, 5, -15},
		{2021, 2, 16, 1, 1, -25},
		{2021, 2, 17, 1, 1, -30},
		{2021, 3, 16, 1, 1, -10},
		{2021, 4, 16, 1, 1, 0},
		{2021, 5, 16, 1, 1, 10},
		{2021, 6, 16, 1, 1, 25},
		{2021, 7, 16, 1, 1, 30},
		{2021, 8, 16, 1, 1, 20},
		{2021, 9, 16, 1, 1, 18},
		{2021, 10, 16, 1, 1, 2},
		{2021, 11, 16, 1, 1, -5},
		{2021, 12, 16, 1, 1, 7-20},
	};

	int size = 16;

	// Вывод информации из массива
	printf("Temperature records:\n");
	for (int i = 0; i < size; i++)
	{
		printf("Date: %04d-%02d-%02d Time: %02d:%02d Temperature: %3d C\n", 
				data[i].year, data[i].month, data[i].day, data[i].hour,
				data[i].minute, data[i].temp);
	}
*/

	// Чтение данных
	int size;
	TempData *data = createTempArray(&size, filename);
	if (!data)
	{
		printf("Error reading the file.\n"); // printf("Ошибка при чтении файла.\n");
		 return 1;
	}
	// Вывод на консоль информации из массива
	else
	{
		printTempData(data, size);
		//printf("Sorted data by increasing temperature\n");
		//sortTempData(data, size);
		//printTempData(data, size);
	}
	// Вывод статистики
	if (month > 0)
	{
		printf("\nAverage monthly temperature: %.2f\n", averageMonthlyTemp(data, size, month)); // printf("Среднемесячная температура: %.2f\n", averageMonthlyTemp(data, size, month));
		printf("Minimum monthly temperature: %d\n", monthlyMin(data, size, month)); // printf("Минимальная месячная температура: %d\n", monthlyMin(data, size, month));
		printf("Maximum monthly temperature: %d\n", monthlyMax(data, size, month)); // printf("Максимальная месячная температура: %d\n", monthlyMax(data, size, month));
	} 
	else 
	{
		printf("\nAverage temperature for the year: %.2f\n", averageYearlyTemp(data, size)); // printf("Среднегодовая температура: %.2f\n", averageYearlyTemp(data, size));
		printf("Minimum temperature for the year: %d\n", yearlyMin(data, size)); // printf("Минимальная температура за год: %d\n", yearlyMin(data, size));
		printf("Maximum temperature for the year: %d\n", yearlyMax(data, size)); // printf ("Maximum temperature per year: %d\n", yearlyMax(data, size));
	}

	free(data);

	return 0;
}
