# 0x1C. C - Makefiles

## Tasks

1. [0-Makefile](0-Makefile)
   - **Task Description:** Create your first Makefile.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rule: `all` (builds the executable).
     - Variables: None specified.

2. [1-Makefile](1-Makefile)
   - **Task Description:** Makefile to build the 'school' executable with specified variables and rules.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rule: `all` (builds the executable).
     - Variables: `CC` (the compiler to be used) and `SRC` (the .c files).

3. [2-Makefile](2-Makefile)
   - **Task Description:** Create a useful Makefile that recompiles only updated source files for the 'school' executable.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rule: `all` (builds the executable).
     - Variables: `CC` (the compiler to be used), `SRC` (the .c files), `OBJ` (the .o files), `NAME` (the name of the executable).

4. [3-Makefile](3-Makefile)
   - **Task Description:** Makefile with additional rules (clean, oclean, fclean, re) and variable specifications for 'school' executable.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rules: `all` (builds the executable), `clean` (deletes temporary files and the executable), `oclean` (deletes object files), `fclean` (deletes temporary files, executable, and object files), `re` (forces recompilation of all source files).
     - Variables: `CC` (the compiler to be used), `SRC` (the .c files), `OBJ` (the .o files), `NAME` (the name of the executable), `RM` (the program to delete files).

5. [4-Makefile](4-Makefile)
   - **Task Description:** A complete Makefile with advanced rules, flags, and specifications for 'school' executable.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rules: `all` (builds the executable), `clean` (deletes temporary files and the executable), `oclean` (deletes object files), `fclean` (deletes temporary files, executable, and object files), `re` (forces recompilation of all source files).
     - Variables: `CC` (the compiler to be used), `SRC` (the .c files), `OBJ` (the .o files), `NAME` (the name of the executable), `RM` (the program to delete files), `CFLAGS` (compiler flags).

6. [5-island_perimeter.py](5-island_perimeter.py)
   - **Task Description:** Python script with a function to calculate the perimeter of an island in a grid.
   - **Requirements:**
     - Function `def island_perimeter(grid)` that returns the perimeter of the island described in the grid.
     - Details: Grid representation with 0 (water zone) and 1 (land zone). Each cell is a square with a side length of 1. Grid cells are connected horizontally/vertically. The grid is rectangular with a width and height not exceeding 100. The grid is completely surrounded by water, with one island and no internal lakes.

7. [100-Makefile](100-Makefile)
   - **Task Description:** Advanced Makefile with specific constraints for building the 'school' executable.
   - **Requirements:**
     - Name of the executable: `school`.
     - Rules: `all` (builds the executable), `clean` (deletes temporary files and the executable), `oclean` (deletes object files), `fclean` (deletes temporary files, executable, and object files), `re` (forces recompilation of all source files).
     - Variables: `CC` (the compiler to be used), `SRC` (the .c files), `OBJ` (the .o files), `NAME` (the name of the executable), `RM` (the program to delete files), `CFLAGS` (compiler flags).

---
