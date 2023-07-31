# 0x0C-more_malloc_free


|                  File                                    |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        0-malloc_checked.c                        |  Function that allocates memory using malloc.  |
|        1-string_nconcat.c                        |  Function that concatenates two strings.  |
|        2-calloc.c                  |  Function that allocates memory using malloc based off of an array of elements nmemb based on the size that's passed to the prototype. |
|        3-array_range.c                          |  Function that creates an array of integers ordered from smallest to biggest. |
|        100-realloc.c                            |  Function that reallocates a memory block using malloc and free.  |

## Example:

#### 0-main.c
```
waltonlee$ cat 0-main.c
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
waltonlee$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
waltonlee$ ./a
0x1e39010
0x1e39830
0x7f31f6c19010
waltonlee$ echo $?
98
waltonlee$