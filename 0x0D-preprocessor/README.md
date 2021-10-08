# 0x0D. C - Preprocessor

> The C preprocessor modifies a source code file before handing it over to the compiler. You're most likely used to using the preprocessor to include files directly into other files, or #define constants, but the preprocessor can also be used to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.  
  
> There are essentially three uses of the preprocessor--directives, constants, and macros.  
  
**Header Files**  
> The #include directive tells the preprocessor to grab the text of a file and place it directly into the current file. Typically, such statements are placed at the top of a program--hence the name "header file" for files thus included.  
  
**Constants**  
> If we write
`#define [identifier name] [value]`  
whenever `[identifier name]` shows up in the file, it will be replaced by `[value]`.  
  
If you are defining a constant in terms of a mathematical expression, it is wise to surround the entire value in parentheses:  
  
`#define PI_PLUS_ONE (3.14 + 1)`  
By doing so, you avoid the possibility that an order of operations issue will destroy the meaning of your constant:  
  
`x = PI_PLUS_ONE * 5;`  
Without parentheses, the above would be converted to  
  
`x = 3.14 + 1 * 5;`  
which would result in 1 * 5 being evaluated before the addition, not after. Oops!  
  
It is also possible to write simply  
  
`#define [identifier name]`  
which defines `[identifier name]` without giving it a value. This can be useful in conjunction with another set of directives that allow conditional compilation  
  
**Macros**  
> The other major use of the preprocessor is to define macros.  
A macro definition is usually of the following form:  
`#define MACRO_NAME(arg1, arg2, ...) [code to expand to]`  
> For instance, a simple increment macro might look like this:  
`#define INCREMENT(x) x++` 

### 0. Object-like Macro

`0-object_like_macro.h` - a header file that defines a macro named SIZE as an abbreviation for the token 1024.

### 1. Pi

`1-pi.h` - a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

### 2. File name

`2-main.c` - a program that prints the name of the file it was compiled from, followed by a new line.

### 3. Function-like macro

`3-function_like_macro.h` - a function-like macro ABS(x) that computes the absolute value of a number x.

### 4. SUM

`4-sum.h` - a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
