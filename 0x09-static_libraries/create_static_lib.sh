#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc linall.a *.c
ranlib liball.a
