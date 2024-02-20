<h2 align=center>

  ![Printf Logo](https://github.com/ericlespiana/erpiana-utils/blob/master/ft_printfe.png)
</h2>

# 42 School printf Project

Welcome to the repository of my "printf" project for 42 School!

## Project Description

In this project, I implemented my own version of the `printf` function in the C language using custom functions and parameters. This challenge is part of the 42 School curriculum and aims to deepen the understanding of how the `printf` function works internally in the C language.

## Features Implemented

- **Format Specifiers**: My implementation supports a variety of format specifiers, such as `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, and more format specifiers

- **Variable Arguments**: The original `printf` function in C allows you to pass a variable number of arguments. My implementation also handles this functionality, allowing you to pass as many arguments as needed.

## How to Use

1. Clone this repository to your local machine:

   ```shell
   git clone https://github.com/ericlespiana/ft_printf.git

2. Compile the project. You can use the provided makefile:
   ```
   cd ft_printf/
   make

3. Now you can use the ft_printf function in your C programs just like the standard printf function:
   ```
   #include "ft_printf.h"

   int main()
   {
    ft_printf("Hello, %s! You are %d years old.\n", "John", 25);
    return 0;
   }
  ps: don't forget to compile your main with the libftprintf.a library like:
   ```
   cc main.c libftprintf.a
```
## Contributions
 
This project was developed as part of the 42 School curriculum, and therefore external contributions may be limited. However, feel free to open issues or suggest improvements if you find it necessary.
