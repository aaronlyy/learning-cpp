# How to compile a c++ program

## Windows

### Installation of compiler

- Download and install [cygwin](https://www.cygwin.com/) and select g++, gcc

## Assembling, Compiling & Linking

### Assemble code

```txt
g++ -S 
input.cpp -o output.s
```

### Compile code to object code

```txt
g++ -c input.cpp input2.cpp
```

### Link object code and create executable

```txt
g++ input.o input2.o -o output.exe
```

## Flags

```txt
-Wall // show all warnings
```
