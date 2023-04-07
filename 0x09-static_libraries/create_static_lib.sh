#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c -L. *.c
ar -rc liball.a *.0
ranlib liball.a
