#0x17-dynamic_libraries
Introduction on how to create a dynamic library.

|                  File                                    |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        libholberton.so                        |  A dynamic library that contains a list of twenty prototypes.  |
|        holberton.h                            |  Header file containing all prototypes used.  |
|        1-create_dynamic_lib.sh                |  Shell script used to create a dynamic library. |

##Example:

####7-print_last_digit.c
```
-rwxrwxr-x 1 walton walton Jan 14 20:28 libholberton.so
waltonlee$ nm -D libholberton.so
00000000000010cd T _abs
0000000000001157 T _atoi
0000000000202040 B __bss_start
                 w __cxa_finalize
0000000000202040 D _edata
0000000000202048 B _end
000000000000118c T _fini
                 w __gmon_start__
00000000000008c0 T _init
0000000000000f4a T _isalpha
0000000000000af8 T _isdigit
0000000000000cf7 T _islower
0000000000000a15 T _isupper
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 w _Jv_RegisterClasses
0000000000000b19 T _memcpy
0000000000000a36 T _memset
0000000000001166 T _putchar
0000000000000d18 T _puts
0000000000000a71 T _strcat
0000000000000bf9 T _strchr
0000000000000d6b T _strcmp
00000000000010e6 T _strcpy
0000000000000c4e T _strlen
0000000000000b5c T _strncat
0000000000000c7c T _strncpy
0000000000000f77 T _strpbrk
0000000000000e81 T _strspn
0000000000001007 T _strstr
                 U write

waltonlee$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("Holberton"));
    return (EXIT_SUCCESS);
}

waltonlee$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -lholberton -o len
waltonlee$ ldd len
		linux-vdso.so.1 =>  (0x00007ffe4a9bd000)
		libholberton.so => not found
		libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd584868000)
		/lib64/ld-linux-x86-64.so.2 (0x00007fd584c2d000)
waltonlee$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
waltonlee$ ldd len
	   linux-vdso.so.1 =>  (0x00007fffdfb3f000)
	   libholberton.so => ./libholberton.so (0x00007efcc4d07000)
	   libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007efcc4942000)
	   /lib64/ld-linux-x86-64.so.2 (0x00007efcc4f0a000)
waltonlee$ ./len
9
```
