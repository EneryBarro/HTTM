targets = main.bin
CC = gcc

all: clean prep compile run

	gcc lab05.c -o main.bin

clean:
	rm -rf lab05
prep:
	
compile: main.bin

run: clean prep compile
	./main.bin

