Libft

This project has been created as part of the 42 curriculum by llyra-li.

Description

Libft is a custom library written in C, serving as a foundational toolkit for future projects. It re-implements several standard C library functions (libc) as well as additional utility functions for string manipulation, memory management, and linked list operations. This library is designed to help understand the inner workings of common C functions and provides a robust set of tools for future 42 assignments.

Contents

The library is divided into three main parts:

Libc functions: Standard C functions re-implemented from scratch.

Additional functions: Custom utility functions to facilitate string and memory manipulation.

Linked list functions: Functions to create, traverse, and manage dynamic linked lists.

Instructions

To compile the library, navigate to the root directory and use the make utility:

make: Compiles the library and creates libft.a.

make clean: Removes all object files.

make fclean: Removes the object files and the libft.a archive.

make re: Performs fclean followed by make.

To use the library in your own projects, include the header file:

#include "libft.h"


And link the library during compilation:

cc your_file.c -L. -lft


Resources

During the development of this project, I utilized the C standard library documentation, internal 42 project subject PDFs, and AI-assisted debugging tools to verify memory management logic, particularly regarding linked list traversal and the handling of function pointers in complex operations like ft_lstmap and ft_lstclear.
