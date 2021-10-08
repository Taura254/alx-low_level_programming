# 0x09. C - Static libraries

### 0. A library is not a luxury but one of the necessities of life

``libmy.a``` - A static library containing all the functions listed in the main.h  
``main.h`` - Contains all the function prototypes of the function

### 1. Without libraries what have we? We have no past and no future

``create_static_lib.sh`` - A shell script that creates a static library called ``liball.a`` from all the ``.c`` files that are in the current directory
