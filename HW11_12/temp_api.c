#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_api.h"

// Функция для загрузки/создания массива температур из CSV-файла
TempData* createTempArray(int *size, const char *filename)
{
 	FILE *file = fopen(filename, "r");
 	if (!file)
	{
 		perror("The file could not be opened"); // perror("Не удалось открыть файл");
 		return NULL;
 	}

    // Выделение памяти для массива данных
    *size = 0;
	int capacity = 100;
    TempData *data = malloc(sizeof(TempData) * capacity); // Начальный размер массива
    
	int lineNumber = 0;
    while (!feof(file))
	{
        TempData temp;
        lineNumber++;

    	// проверка данных на корректность/соответствие заданному формату полей записей массива
		if (fscanf(file, "%4d;%2d;%2d;%2d;%2d;%d",
 			&temp.year, &temp.month, &temp.day, &temp.hour, &temp.minute, &temp.temp) != 6 ||
		 	temp.year < 1000 || temp.year > 9999 || temp.month < 1 || temp.month > 12 ||
 			temp.day < 1 || temp.day > 31 || temp.hour < 0 || temp.hour > 23 ||
			temp.minute < 0 || temp.minute > 59 || temp.temp < -99 ||
			temp.temp > 99) 
		{
			printf("Format error on line %d\n", lineNumber); // printf("Ошибка формата на строке %d\n", lineNumber);
 			continue;
		}
	
		// Добавление данных в массив
		if (*size >= capacity)
		{
			capacity *= 2;
			data = realloc(data, capacity * sizeof(TempData));
		}
		data[(*size)++] = temp;
    }
    fclose(file);
    return data;
}

// Функция добавления записей
void addTempRecord(TempData **data, int *size, TempData record)
{
    *data = realloc(*data, (*size + 1) * sizeof(TempData));
    (*data)[(*size)++] = record;
    //(*size)++;
}

// Функция удаления записей
void deleteTempRecord(TempData **data, int *size, int index)
{
    if (index < 0 || index >= *size)
		return;
    for (int i = index; i < *size - 1; i++)
	{
        (*data)[i] = (*data)[i + 1];
    }
    (*size) --;
   // *data = realloc(*data, *size * sizeof(TempData));
}

// Функция сортировки массива данных
void sortTempData(TempData *data, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (data[j].temp > data[j + 1].temp)
			{
				TempData temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
}

// Функция для печати массива данных
void printTempData(const TempData *data, int size)
{
 	for (int i = 0; i < size; i++)
	{
 		printf("%4d-%02d-%02d %02d:%02d %d C\n",
 				data[i].year, data[i].month, data[i].day,
				data[i].hour, data[i].minute, data[i].temp);
 	}
}

// Статистические функции:

// Среднемесячная температура
float averageMonthlyTemp(TempData *data, int size, int month)
{
	int sum = 0, count = 0;
	for (int i = 0; i < size; i++)
	{
		if (data[i].month == month)
		{
			sum += data[i].temp;
			count++;
		}
	}
	return (count > 0) ? (float)sum / count : 0;
}

// Минимальная температура за месяц
int monthlyMin(TempData *data, int size, int month) 
{
	int minTemp = 100; // Для поиска минимума
	for (int i = 0; i < size; i++)
	{
		if (data[i].month == month && data[i].temp < minTemp)
		{
			minTemp = data[i].temp;
		}
	}
	return minTemp;
}

// Максимальная температура за месяц
int monthlyMax(TempData *data, int size, int month)
{
	int maxTemp = -100; // Для поиска максимума
	for (int i = 0; i < size; i++)
	{
		if (data[i].month == month && data[i].temp > maxTemp)
		{
			maxTemp = data[i].temp;
		}
	}
	return maxTemp;
}

// Среднегодовая температура
float averageYearlyTemp(TempData *data, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += data[i].temp;
	}
	return (float)sum / size;
}

// Минимальная температура за год
int yearlyMin(TempData *data, int size)
{
	int minTemp = 100;
	for (int i = 0; i < size; i++)
	{
		if (data[i].temp < minTemp)
		{
			minTemp = data[i].temp;
		}
	}
	return minTemp;
}

// Максимальная температура за год
int yearlyMax(TempData *data, int size)
{
	int maxTemp = -100;
	for (int i = 0; i < size; i++)
	{
		if (data[i].temp > maxTemp)
		{
			maxTemp = data[i].temp;
		}
	}
	return maxTemp;
}
