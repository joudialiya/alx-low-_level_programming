#!/bin/bash
find . -name "*.c" -exec gcc -c {} \;
ar rc liball.a *
rm *.o
