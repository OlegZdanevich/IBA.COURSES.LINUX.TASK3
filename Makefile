# Это комментарий, который говорит, что переменная CC указывает компилятор, используемый для сборки
CC=g++
#Это еще один комментарий. Он поясняет, что в переменной CFLAGS лежат флаги, которые передаются компилятору
CFLAGS=-c -Wall

all: hello

hello: main.o func.o 
	$(CC) main.o func.o -o hello -lpthread

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -lpthread

func.o: func.cpp
	$(CC) $(CFLAGS) func.cpp

clean:
	rm -rf *.o hello
