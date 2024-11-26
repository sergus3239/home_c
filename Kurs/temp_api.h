#ifndef TEMP_API_H
#define TEMP_API_H

// Структура для хранения данных о температуре
typedef struct
{
    int year;        // Год (4 цифры)
    int month;       // Месяц (2 цифры)
    int day;         // День (2 цифры)
    int hour;        // Часы (2 цифры)
    int minute;      // Минуты (2 цифры)
    int temp; // Температура (от -99 до 99)
} TempData;

// Функции для работы с данными
TempData* createTempArray(const char *filename, int *size);
void addTempRecord(TempData **data, int *size, TempData record);
void deleteTempRecord(TempData **data, int *size, int index);
void sortTempData(TempData *data, int size);
void printTempData(const TempData *data, int size);

//Статистические функции: 
// статистика за месяц
float averageMonthlyTemp(const TempData *data, int size, int month);
int monthlyMin(const TempData *data, int size, int month);
int monthlyMax(const TempData *data, int size, int month);
// статистика за год
float averageYearlyTemp(const TempData *data, int size);
int yearlyMin(const TempData *data, int size);
int yearlyMax(const TempData *data, int size);

#endif // TEMP_API_H
