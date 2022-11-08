#!/bin/bash
gcc -Wall -Wextra -Werror -pendantic -c *.c
ar rc liball .a *.o
