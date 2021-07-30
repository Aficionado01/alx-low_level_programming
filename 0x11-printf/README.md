# Printf

This project is an implementation of the [`printf`](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm) function in the __C__ standard libray.

## Tasks Completed

+ [x] 0\. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life<br/>_**[_printf.c](_printf.c)**_ contains a function that produces output according to a format.
+ [x] 1\. Education is when you read the fine print. Experience is what you get if you don't<br/>Handle the following conversion specifiers:<br/>
  + `d`
  + `i`
+ [x] 2\. Just because it's in print doesn't mean it's the gospel<br/>_**[man_3_printf](man_3_printf)**_ is the man page for the **_printf** function.
+ [x] 3\. With a face like mine, I do better in print<br/>_**[file.c](file.c)**_ Handle the following custom conversion specifiers:<br/>
  + `b`: the unsigned int argument is converted to binary
+ [x] 4\. What one has not experienced, one will never understand in print<br/>_**[file.c](file.c)**_ Handles the following conversion specifiers:<br/>
  + `u`
  + `o`
  + `x`
  + `X`
+ [x] 5\. Nothing in fine print is ever good news<br/>_**[file.c](file.c)**_ uses a local buffer of `1024` chars in order to call write as little as possible.
+ [x] 6\. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print<br/>_**[0-file.c](0-file.c)**_ Handles the following conversion specifier: `p`.
+ [x] 7\. My weakness is wearing too much leopard print<br/>_**[file.c](file.c)**_ Handle the following custom conversion specifier:<br/>
  + `S`: prints the string
  + Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
+ [x] 8\. The big print gives and the small print takes away<br/>Handle the following flag characters for non-custom conversion specifiers:<br/>
  + `+`
  + space
  + `#`
+ [x] 9\. Sarcasm is lost in print<br/>Handle the following length modifiers for non-custom conversion specifiers (`d`, `i`, `u`, `o`, `x`, `X`):
  + `l`
  + `h`
+ [x] 10\. Print some money and give it to us for the rain forests<br/>Handle the field width for non-custom conversion specifiers.
+ [x] 11\. The negative is the equivalent of the composer's score, and the print the performance<br/>Handle the precision for non-custom conversion specifiers.
+ [x] 12\. It's depressing when you're still around and your albums are out of print<br/>Handle the `0` flag character for non-custom conversion specifiers.
+ [x] 13\. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection<br/>Handle the `-` flag character for non-custom conversion specifiers.
+ [x] 14\. Print is the sharpest and the strongest weapon of our party<br/>_**[file.c](file.c)**_ Handles the following custom conversion specifier:<br/>
  + `r`: prints the reversed string.
+ [x] 15\. The flood of print has turned reading into a process of gulping rather than savoring<br/>_**[file.c](file.c)**_ Handles the following custom conversion specifier:<br/>
  + `R`: prints the rot13'ed string
+ [ ] 16\. \*<br/>All the tasks above are working well together.

## How To Use

The `holberton.h` header must be included before you can use the function.

```c
#include "holberton.h"

int chars_written = _printf("Wind: %d%s and Precipitation: %d%%\\n", 28, "km/h", 0x1a);
```
