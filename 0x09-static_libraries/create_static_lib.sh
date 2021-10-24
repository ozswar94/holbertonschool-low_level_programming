#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -g -O -c *.c
ar rc liball.a *.o
ranlib libmy.a
rm *.o
