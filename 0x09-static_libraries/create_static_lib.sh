#!/bin/bash
gcc -c *.c
ar -rc liball.a *.0
ar -t liball.a
ranlib liball.a
