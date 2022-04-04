# How to compile a c++ program

## Windows

### Installation of compiler

- Download and install [cygwin](https://www.cygwin.com/) and select g++, gcc

## Assembling, Compiling & Linking

### Assemble code

```txt
g++ -S -o output.s input.cpp
```

### Compile code to object code

```txt
g++ -c input.cpp input2.cpp
```

### Link object code and create executable

```txt
g++ -o output.exe input.o input2.o
```

## Flags

```txt
-Wall // show all warnings
```
