# basic syntax

#! dont use spaces, use tabs

# target: dependencies
# 	action

# $< is replaced by the first dependency
# $^ is replaced by the all dependencies
# $@ is replaced by target name
# $(variable) access variables
# %.o %.c are name patterns

# .PHONY executes everytime even if a file called like the target exists

# variables
CC=g++ # compiler
CFLAGS=-c -Wall # compiler flags
ASSEMBLYFLAGS=-S -masm=intel

BIN=hello.exe # output name
SOURCE=main.cpp func.cpp # cpp source files
HEADER=func.h # header dependencies
OBJECTS=main.o func.o # objects

# first target (executed by default)
.PHONY: all # target is executed even if a file calles "all" exists (.PHONY)
all: $(BIN) # accesses the BIN variable

$(BIN): $(OBJECTS) # accesses the OBJECTS variable and adds it as dependencies
# $@ is replaced by the target name ($(BIN))
	$(CC) $(OBJECTS) -o $@

%.s: %.cpp $(HEADER)
	$(CC) $(ASSEMBLYFLAGS) $<

%.o: %.cpp $(HEADER)
# $< is replaced by the first dependency (%.cpp)
	$(CC) $(CFLAGS) -c $<

.PHONY: clean
clean:
	rm *.o

.PHONY: cleanall
cleanall:
	rm -f *.o
	rm -f $(BIN)

# main.o: main.cpp
# 	$(CC) $(CFLAGS) $^

# func.o: func.cpp func.h
# 	$(CC) $(CFLAGS) $<