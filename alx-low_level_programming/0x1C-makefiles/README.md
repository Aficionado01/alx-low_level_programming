# Makefiles

This project contains tasks for learning about the use of a *Makefile* in development with a focus on __C__ projects.

## Tasks To Complete

+ [x] 0\. make -f 0-Makefile <br/>_**[0-Makefile](0-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + The `all` rule builds the executable.
  + variables: none.
+ [x] 1\. make -f 1-Makefile <br/>_**[1-Makefile](1-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + `all`: builds the executable.
  + variables: `CC`, `SRC`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
+ [x] 2\. make -f 2-Makefile <br/>_**[2-Makefile](2-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`.
    + `all`: builds the executable.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
  + The `all` rule should recompile only the updated source files.
  + A list of all the `.o` files should not be present in the Makefile.
+ [x] 3\. make -f 3-Makefile <br/>_**[3-Makefile](3-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`, `clean`, `oclean`, `fclean`, `re`.
    + `all`: builds the executable.
    + `clean`: deletes all Emacs and Vim temporary files along with the executable.
    + `oclean`: deletes the object files.
    + `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
    + `re`: forces recompilation of all source files.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
    + `RM`: the program to delete files.
  + The `all` rule should recompile only the updated source files.
  + The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  + A list of all the `.o` files should not be present in the Makefile.
+ [x] 4\. A complete Makefile <br/>_**[4-Makefile](4-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`, `clean`, `oclean`, `fclean`, `re`.
    + `all`: builds the executable.
    + `clean`: deletes all Emacs and Vim temporary files along with the executable.
    + `oclean`: deletes the object files.
    + `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
    + `re`: forces recompilation of all source files.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
    + `RM`: the program to delete files.
    + `CFLAGS`: the compiler flags: `-Wall -Werror -Wextra -pedantic`.
  + The `all` rule should recompile only the updated source files.
  + The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  + A list of all the `.o` files should not be present in the Makefile.
+ [x] 5\. Island Perimeter <br/>_**[5-island_perimeter.py](5-island_perimeter.py)**_ contains a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:
  + `grid` is a list of list of integers:
    + 0 represents a water zone.
    + 1 represents a land zone.
    + One cell is a square with side length 1.
    + Grid cells are connected horizontally/vertically (not diagonally).
    + Grid is rectangular, width and height don't exceed 100.
  + Grid is completely surrounded by water, and there is one island (or nothing).
  + The island doesn't have "lakes" (water inside that isn't connected to the water around the island).
+ [x] 6\. make -f 100-Makefile <br/>_**[100-Makefile](100-Makefile)**_ Requirements:
  + name of the executable: `school`.
  + rules: `all`, `clean`, `oclean`, `fclean`, `re`.
    + `all`: builds the executable.
    + `clean`: deletes all Emacs and Vim temporary files along with the executable.
    + `oclean`: deletes the object files.
    + `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files.
    + `re`: forces recompilation of all source files.
  + variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`.
    + `CC`: the compiler to be used.
    + `SRC`: the `.c` files.
    + `OBJ`: the `.o` files.
    + `NAME`: the name of the executable.
    + `RM`: the program to delete files.
    + `CFLAGS`: the compiler flags: `-Wall -Werror -Wextra -pedantic`.
  + The `all` rule should recompile only the updated source files.
  + The `clean`, `oclean`, `fclean`, `re` rules should never fail.
  + A list of all the `.o` files should not be present in the Makefile.
  + The string `$(RM)` has to be used for the cleaning up rules, but the `RM` variable should not be set.
  + The string `$(CC)` cannot be used more than once in the Makefile.
  + The string `$(RM)` can only be used twice in the Makefile.
  + The string `$(CFLAGS)` should not be used (but the compiler should still use the flags that were set in this variable).
  + Any `$(OBJ)` rule is not allowed.
  + The `%.o: %.c` rule is not allowed.
  + The Makefile should work even if there is a file in the folder that has the same name as one of the rules.
  + The Makefile should not compile if the header file `m.h` is missing.
