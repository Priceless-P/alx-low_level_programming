# 0x18. C - Dynamic libraries

## Learning Objectives
By the end of this project, I have gained knowledge in the following areas:

### General
- Understanding of dynamic libraries, their functioning, creation, and utilization.
- Familiarity with the environment variable `$LD_LIBRARY_PATH` and its practical application.
- Recognizing the distinctions between static and shared libraries.
- Basic usage of `nm`, `ldd`, and `ldconfig` for library inspection and configuration.

## Tasks

### 0. A library is not a luxury but one of the necessities of life (mandatory)
In this task, I created a dynamic library named `libdynamic.so` containing several functions. These functions include:
1. `_putchar`
2. `_islower`
3. `_isalpha`
4. `_abs`
5. `_isupper`
6. `_isdigit`
7. `_strlen`
8. `_puts`
9. `_strcpy`
10. `_atoi`
11. `_strcat`
12. `_strncat`
13. `_strncpy`
14. `_strcmp`
15. `_memset`
16. `_memcpy`
17. `_strchr`
18. `_strspn`
19. `_strpbrk`
20. `_strstr`

 - File: [libdynamic.so](./libdynamic.so)
 - File: [main.h](./main.h)

### 1. Without libraries, what have we? We have no past and no future (mandatory)
This task involved creating a script (`1-create_dynamic_lib.sh`) that generates a dynamic library named `liball.so` from all the `.c` files present in the current directory.
   - File: [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh)

### 2. Let's call C functions from Python (advanced)
For this advanced task, a dynamic library (`100-operations.so`) was created, containing C functions that can be called from Python. A Python script (`100-tests.py`) was provided as an example of how to utilize these C functions from within Python code. The functions demonstrated in the Python script include addition, subtraction, multiplication, division, and modulo operations performed on random integers.
   - File: [100-operations.so](./100-operations.so)
   - File: [100-tests.py](./100-tests.py)