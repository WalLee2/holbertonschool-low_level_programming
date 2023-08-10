# 0x0F-function_pointers


|                  File                                    |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        function_pointers.h                        |  Header file  |
|        0-print_name.c                 |  Function pointer used to print name |
|        1-array_iterator.c             |  Function that operates on an array |
|        2-int_index.c              	|  Function that searches for an integer  |
|        3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h                  | Simple calculator using function pointers   |

### Example:

```
wallee$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
wallee$ ./calc 1 + 1
2
wallee$ ./calc 97 + 1
98
wallee$ ./calc 1024 '\*' 98
Error
```