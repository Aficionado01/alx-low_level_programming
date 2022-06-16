# Dynamic libraries

This project contains __C__ tasks for learning about dynamic libraries.

## Tasks To Complete

+ [x] 0\. A library is not a luxury but one of the necessities of life <br/>_**[libdynamic.so](libdynamic.so)**_ contains the functions with the following prototypes from previous projects in this repository:<br/>
  ```c
  int _putchar(char c);
  int _islower(int c);
  int _isalpha(int c);
  int _abs(int n);
  int _isupper(int c);
  int _isdigit(int c);
  int _strlen(char *s);
  void _puts(char *s);
  char *_strcpy(char *dest, char *src);
  int _atoi(char *s);
  char *_strcat(char *dest, char *src);
  char *_strncat(char *dest, char *src, int n);
  char *_strncpy(char *dest, char *src, int n);
  int _strcmp(char *s1, char *s2);
  char *_memset(char *s, char b, unsigned int n);
  char *_memcpy(char *dest, char *src, unsigned int n);
  char *_strchr(char *s, char c);
  unsigned int _strspn(char *s, char *accept);
  char *_strpbrk(char *s, char *accept);
  char *_strstr(char *haystack, char *needle);
	```
+ [x] 1\. Without libraries what have we? We have no past and no future <br/>_**[1-create_dynamic_lib.sh](1-create_dynamic_lib.sh)**_ creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
+ [x] 2\. Let's call C functions from Python <br/>_**[100-operations.so](100-operations.so)**_ contains C functions that can be called from Python.<br/>The functions have the following prototypes:<br/>
  ```c
	int add(int a, int b); /* Addition */
	int sub(int a, int b); /* Subtraction */
	int mul(int a, int b); /* Multiplication */
	int div(int a, int b); /* Division */
	int mod(int a, int b); /* Modulo */
	```
+ [x] 3\. Code injection: Win the Giga Millions! <br/>_**[101-make_me_win.sh](101-make_me_win.sh)**_ runs two commands on the same server where the [Giga Millions](gm) program runs so that the numbers `9, 8, 10, 24, 75 + 9` would win the Jackpot.
