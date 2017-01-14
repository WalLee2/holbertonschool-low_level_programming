#!/bin/bash
gcc -Wall -fPIC -c  -g *.c
gcc -shared *.o -o liball.so
