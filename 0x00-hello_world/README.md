# 0x00-hello_world

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|          0-preprocessor   |  A bash script that runs a C file through the preprocessor and saves the result into another file. |
|        1-compiler         |   A bash script that compiles a C file up to assembly code and saves the result into another file. |
|        2-assembler        |   A bash script that compiles a C file before the linking phase in the compilation process.  |
|       3-name              |   A bash script that compiles a C file and creates an executable file. |
|        4-puts.c           |   C program that uses puts to prints out exactly `"Programming is like building a multilingual puzzle`.  |
|        5-printf.c         |   C program that uses printf to print exactly `with proper grammar, but the outcome is a piece of art,`.  |
|        6-size.c           |   C program that prints out the size of each data type of the machine.  |
|        100-intel          |   A bash script that generates the assembly code, in Intel syntax, of a C code.  |
|        101-quote.c        |   C program that prints out `and that piece of art is useful - Dora Korpar, 2015-10-19` to standard error.  |

## Example:

#### 5-printf.c
```
waltonlee$ gcc -Wall 5-printf.c
waltonlee$ ./a.out
with proper grammar, but the outcome is a piece of art,
waltonlee$ 
```
#### 6-size.c
```
waltonlee$ gcc 6-size.c -m32 -o size32 2> /tmp/32
waltonlee$ gcc 6-size.c -m64 -o size64 2> /tmp/64
waltonlee$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
waltonlee$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
waltonlee$ 
```
#### 101-quote.c
```
waltonlee$ gcc -Wall -o quote 101-quote.c
waltonlee$ ./quote
and that piece of art is useful - Dora Korpar, 2015-10-19
waltonlee$ echo $?
1
waltonlee$
