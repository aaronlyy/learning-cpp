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

BIN=dyn.exe # output name
HEADER=dyn_array.hpp # header dependencies
OBJECTS=main.o dyn_array.o # objects

RM=rm -f

# --- default target executed when no target is given to make ---
.PHONY: default
default: all

# --- build all & fresh targets ---
.PHONY: all
all: $(BIN) # accesses the BIN variable

.PHONY: fresh
fresh: cleanall all # delete everything and make a fresh build

# --- single build targets ---
$(BIN): $(OBJECTS) # accesses the OBJECTS variable and adds it as dependencies
# $@ is replaced by the target name ($(BIN))
	$(CC) $(OBJECTS) -o $@

%.s: %.cpp $(HEADER)
	$(CC) $(ASSEMBLYFLAGS) $<

%.o: %.cpp $(HEADER)
# $< is replaced by the first dependency (%.cpp)
	$(CC) $(CFLAGS) -c $<

# --- run targets ---
.PHONY: run
run: $(BIN)
	.\$(BIN)

runfresh: fresh run
.PHONY: runfresh

# --- clean targets ---
.PHONY: cleanall
cleanall: clean
	$(RM) $(BIN)

.PHONY: clean
clean: cleans cleano

.PHONY: cleano
cleano:
	$(RM) *.o

.PHONY: cleans
cleans:
	$(RM) *.s
