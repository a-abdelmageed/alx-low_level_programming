#!/bin/bash
gcc -c -Wall -Werror -fpic $(pwd)/*.c
gcc -shared -o liball.so $(pwd)/*.o

