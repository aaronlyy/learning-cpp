# this is a comment

# variables
CC=g++ # compiler
CFLAGS=-c -Wall # compiler flags
OUT=main.exe # output name

# first target (executed by default)
all: $(OUT)

allrun: $(OUT)
	.\$(OUT)

$(OUT): main.o func.o # dependencies
	$(CC) main.o func.o -o $(OUT)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

func.o: func.cpp
	$(CC) $(CFLAGS) func.cpp

clean:
	rm *.o

cleanall:
	rm *.o
	rm *.exe