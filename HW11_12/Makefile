CC = gcc               // макрос
CFLAGS = -Wall -Werror // макрос
all: prog_temp
prog_temp: main_temp.o temp_api.o
	$(CC) $(CFLAGS) -o prog_temp main_temp.o temp_api.o

main_temp.o: main_temp.c temp_api.h
	$(CC) $(CFLAGS) -c --std=c99 -o main_temp.o main_temp.c
temp_api.o: temp_api.c temp_api.h
	$(CC) $(CFLAGS) -c --std=c99 -o temp_api.o temp_api.c
clean:
	del *.o *.exe
