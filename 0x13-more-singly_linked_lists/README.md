# 0x13-more_singly_linked_lists


|                  File                                    |                     Description                     |
| :-----------------------------------------: |  :-----------------------------------------------:  |
|        lists.h	      | Header file containing prototype definitions |
|        0-print_listint.c    | Print all the contents of a node in a linked list|
|        1-listint_len.c      | Return the number of nodes in a linked list |
|        2-add_nodeint.c      | Add a new node to the beginning of a linked list |
|        3-add_nodeint_end.c  | Add a new node to the end of a linked list |
|        4-free_listint.c     | Free a linked list |
|        5-free_listint2.c    | Free a linked list |
|        6-pop_listint.c      | Delete the head node of a linked list and returnthe data of the node |
|        7-get_nodeint.c      | Return the nth node of a linked list |

### Example:

```
wallee:$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
wallee:$ ./l
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117==
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117==
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117==
==3117== All heap blocks were freed -- no leaks are possible
==3117==
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
wallee:$
```