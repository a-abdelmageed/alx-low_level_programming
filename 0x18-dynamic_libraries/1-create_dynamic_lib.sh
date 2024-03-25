#!/bin/bash
gcc -c  -fpic $(pwd)/*.c
gcc -shared -o liball.so $(pwd)/*.o