# 0x0B. C - malloc, free

> When you declare variables or when you use strings within double quotes, the program is taking care of all the memory allocation. You do not have to think about it.  
> The arguments and the local variables are stored automatically in memory when the function is called. The program reserves space and uses it without you having to think about it.  
> The `malloc` function is used to allocate a certain amount of memory during the execution of a program.  
> It will request a block of memory from the heap.  
> If the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space.  

> When the amount of memory is not needed anymore, you must return it to the operating system by calling the function `free`.

> Syntax: 
`void *malloc(size_t size)` where `size` − is the size of the memory block, in bytes.

### 0. Float like a butterfly, sting like a bee

`char *create_array(unsigned int size, char c)` - a function that creates an array of chars, and initializes it with a specific char.  

### 1. The woman who has no imagination has no wings

`char *_strdup(char *str)` - a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.  

### 2. He who is not courageous enough to take risks will accomplish nothing in life

`char *str_concat(char *s1, char *s2)` - a function that concatenates two strings.  

### 3. If you even dream of beating me you'd better wake up and apologize

`int **alloc_grid(int width, int height)` - a function that returns a pointer to a 2 dimensional array of integers.  

### 4. It's not bragging if you can back it up

`void free_grid(int **grid, int height)`-  a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.  

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

`char *argstostr(int ac, char **av)` - a function that concatenates all the arguments of your program.  

### 6. I will show you how great I am  

`char **strtow(char *str)` - a function that splits a string into words.
