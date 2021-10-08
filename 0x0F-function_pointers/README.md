# 0x0F. C - Function pointers

> In C, like normal data pointers (int *, char *, etc), we can have pointers to functions. Following is a simple example that shows declaration and function call using function pointer.  
> Following are some interesting facts about function pointers.

 
1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.  
  
2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers.  
  
3. A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing `*`, the program still works.  

**0. What's my name**  

`0-print_name.c` - a function that prints a name.  

**1. If you spend too much time thinking about a thing, you'll never get it done**  

`1-array_iterator.c` - a function that executes a function given as a parameter on each element of an array.  

**2. To hell with circumstances; I create opportunities**  

`2-int_index.c` - a function that searches for an integer.  

**3. A goal is not always meant to be reached, it often serves simply as something to aim at**  

`3-main.c` - a program that performs simple operations.  

`3-op_functions.c` - This file should contain the 5 following functions (not more)  

`3-get_op_func.c` - This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function  

`3-calc.h` - This file should contain all the function prototypes and data structures used by the program.  

**4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker**  

`100-main_opcodes.c` -  a program that prints the opcodes of its own main function.
