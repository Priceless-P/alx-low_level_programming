#!/bin/bash

# Compile all .c files in the current directory into liball.so
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.c -fPIC
