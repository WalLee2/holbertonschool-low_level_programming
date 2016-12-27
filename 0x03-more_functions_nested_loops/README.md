#0x00-hello_world

|                  File                       |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        0-isupper.c                  |   A function that checks for uppercase character. |
|        1-isdigit.c                  |   A function that checks for a digit 0 through 9. |
|        2-mul.c                      |   A function that multiplies two integers.  |
|        3-print_numbers.c            |   A bash script that compiles a C file and creates an executable file. |
|        4-print_most_numbers.c       |   A function that prints the numbers, from 0 to 9, followed by a new line. |
|        5-printf.c                   |   A function that prints 10 times the numbers, from 0 to 14, followed by a new line.  |
|        6-print_line.c               |   A function that draws a straight line in the terminal.  |
|        7-print_diagonal.c           |   A function that draws a diagonal line on the terminal.  |
|        8-print_square.c             |   A function that prints a square, followed by a new line.  |
|        9-fizz_buzz.c                |   A function prints the numbers 1 to 100. Multiples of 3 prints Fizz, multiples of 5 prints Buzz, and multiples of both 3 and 5 print Fizz Buzz.  |
|        10-print_triangle.c          |   A function that prints a triangle, followed by a new line.  |

####2-mul.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-mul.c -o 2-mul
waltonlee$ ./2-mul
100352
-1646592
waltonlee$ 
```
####6-print_line.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-print_line.c -o 6-lines
waltonlee$ ./6-lines | cat -e
$
__$
__________$
$
waltonlee$ 
```
####7-print_diagonal.c
```
waltonlee$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
waltonlee$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
waltonlee$
