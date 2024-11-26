#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "temp_api.h"
#define N 6
// Функция для загрузки/создания массива температур из CSV-файла
TempData* createTempArray(const char *filename, int *size)
{
 	FILE *file = fopen(filename, "r");
 	// Проверка на наличие искомого файла в текущем коталоге
	if (!file)
	{
 		perror("The file could not be opened"); 
 		//return NULL;
		exit(-1);
	}
	// Проверка содержимого файла на отсутствие/наличие информации (файл пустой/ не пустой)
	fseek(file, 0, SEEK_END);
    long file_size = ftell(file); 
    fseek(file, 0, SEEK_SET);  
	if (file_size==0) 
 	{	
		printf("File is EMPTY. Add the date.\n");
		return NULL;
	}
	printf("File is NOT EMPTY\n");
   
    // Выделение памяти для массива данных
    *size = 0;
	int capacity = 100;
    TempData *data = malloc(capacity * sizeof(TempData)); // Начальный размер массива
   	int lineNumber = 0;
	
	// Проверка (функцией feof) - пока не достигнут конец файла
   	while (!feof(file))
	{
        TempData temp;
		lineNumber++;
				
		// проверка данных на корректность 
		// и соответствие заданному формату полей записей массива
		int r; 
		if ((r = fscanf(file, "%4d;%2d;%2d;%2d;%2d;%d",&temp.year, &temp.month,
						 &temp.day, &temp.hour, &temp.minute, &temp.temp))>0)
		{
			char s[capacity];
			if(r<N)
 			{	
  				r = fscanf(file, "%[^\n]", s); 
				printf("Format error of type 1 on line %d: %s\n", lineNumber, s); 
				continue;
			} 
			else if (temp.year < 1000 || temp.year > 9999 || temp.month < 1 || temp.month > 12 ||
					 temp.day < 1 || temp.day > 31 || temp.hour < 0 || temp.hour > 23 || 
					 temp.minute < 0 || temp.minute > 59 || temp.temp < -99 || temp.temp > 99) 
			{
				r=fscanf(file, "%[^\n]", s); 
				printf("Format error of type 2 on line %d: %s\n", lineNumber, s); 
 				continue;
			} 
			// в случае запуска с файлом данных большого объёма - закомментировать вывод на консоль
		/*	else
				printf("%4d;	%2d;	%2d;	%2d;	%2d;	%d C\n", temp.year, temp.month,
						temp.day, temp.hour, temp.minute, temp.temp);
		*/
		}
			
		// Увеличение объёма памяти (добавление данных в массив)
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

// Функция добавления записи
void addTempRecord(TempData **data, int *size, TempData record)
{
    *data = realloc(*data, (*size + 1) * sizeof(TempData));
    (*data)[(*size)++] = record;
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
}

// Функция сортировки массива данных по температуре
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

// Функция для выода массива данных на консоль
void printTempData(const TempData *data, int size)
{
 	//printf ("size=%d\n", size);
	for (int i = 0; i < size; i++)
	{
 		printf("%4d-%02d-%02d  %02d:%02d  %3d C\n",
 				data[i].year, data[i].month, data[i].day,
				data[i].hour, data[i].minute, data[i].temp);
 	}
}

// Статистические функции:

// Среднемесячная температура
float averageMonthlyTemp(const TempData *data, int size, int month)
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
int monthlyMin(const TempData *data, int size, int month) 
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
int monthlyMax(const TempData *data, int size, int month)
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
float averageYearlyTemp(const TempData *data, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += data[i].temp;
	}
	return (float)sum / size;
}

// Минимальная температура за год
int yearlyMin(const TempData *data, int size)
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
int yearlyMax(const TempData *data, int size)
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
