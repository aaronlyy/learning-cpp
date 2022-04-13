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
HEADER=func.h # header dependencies
OBJECTS=main.o func.o # objects

RM=rm -f

# --- default target executed when no target is given to make ---
default: all
.PHONY: default

# --- build all & fresh targets ---
all: $(BIN) # accesses the BIN variable
.PHONY: all

fresh: cleanall all # delete everything and make a fresh build
.PHONY: fresh

# --- single build targets ---
$(BIN): $(OBJECTS) # accesses the OBJECTS variable and adds it as dependencies
# $@ is replaced by the target name ($(BIN))
	$(CC) $(OBJECTS) -o $@

%.s: %.cpp $(HEADER)
	$(CC) $(ASSEMBLYFLAGS) $<

%.o: %.cpp $(HEADER)
# $< is replaced by the first dependency (%.cpp)
	$(CC) $(CFLAGS) -c $<


# --- clean targets ---
cleanall: clean
	$(RM) $(BIN)
.PHONY: cleanall

clean: cleans cleano
.PHONY: clean

cleano:
	$(RM) *.o
.PHONY: cleano

cleans:
	$(RM) *.s
.PHONY: cleans