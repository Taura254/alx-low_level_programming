# 0x10. C - Variadic functions

> Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program.  
> It takes one fixed argument and then any number of arguments can be passed.  
> The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.  

**Syntax:**

	 int function_name(data_type variable_name, ...);  

> Values of the passed arguments can be accessed through the header file named as:  

	 #include <stdarg.h>  

### 0. Beauty is variable, ugliness is constant  

`0-sum_them_all.c` - a function that returns the sum of all its parameters.  

### 1. To be is to be the value of a variable  

`1-print_numbers.c` - a function that prints numbers, followed by a new line.

### 2. One woman's constant is another woman's variable

`2-print_strings.c` - a function that prints strings, followed by a new line.

### 3. To be is a to be the value of a variable

`3-print_all.c` - a function that prints anything. 
