#!/bin/bash
find . -name "*.c" -exec gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c {} \;
ar rc liball.a *.o
rm *.o
