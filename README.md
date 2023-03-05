# `Libft`

My very first C library
This project is about coding a C library. It contains a lot of general purpose functions my programs rely upon.. `Version: 10`.<br>


<h1 align="center">
	42cursus' libft
</h1>

<p align="center">
	<b><i>Development repo for 42cursus libft project</i></b><br>
	For further information about 42cursus and its projects, please refer to <a href="https://github.com/iflis7/libft"><b>42cursus repo</b></a>.
</p>

<p align="center">
    <a href="https://www.cprogramming.com/"><img alt="Made with C" src="https://img.shields.io/badge/Made%20with-C-1f425f.svg"/></a>
    <img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/iflis7/get_next_line?color=lightblue" />
    <img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/iflis7/get_next_line?color=critical" />
    <img alt="Code language count" src="https://img.shields.io/github/languages/count/iflis7/get_next_line?color=yellow" />
    <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/iflis7/get_next_line?color=blue" />
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/iflis7/get_next_line?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 🗣️ About

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

For detailed information, refer to the [**subject of this project**](subject/libft.pdf).

	🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isalnum`](src/is/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isascii`](src/is/ft_isascii.c)			- test for ASCII character.
* [`ft_isalpha`](src/is/ft_isalpha.c)			- alphabetic character test.
* [`ft_islower`](src/is/ft_islower.c) *	- lower-case character test.
* [`ft_isupper`](src/is/ft_isupper.c) *	- upper-case character test.
* [`ft_isdigit`](src/is/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](src/is/ft_isprint.c)			- printing character test (space character inclusive).

* [`ft_tolower`](src/to/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](src/to/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](src/to/ft_atoi.c)		- convert ASCII string to integer.


### Functions from `<strings.h>` library

* [`ft_calloc`](src/mem/ft_calloc.c)	- memory allocation.
* [`ft_bzero`](src/mem/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](src/mem/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](src/mem/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](src/mem/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](src/mem/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](src/mem/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](src/str/ft_strlen.c)				- find length of string.
* [`ft_strchr`](src/str/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](src/str/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](src/str/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](src/str/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](src/str/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](src/str/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strdup`](src/str/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strncat`](src/str/ft_striteri.c) *	- iterate and apply the func on every char.
* [`ft_strlcpy`](src/str/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](src/str/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](src/put/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](src/put/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](src/put/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](src/put/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](src/to/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_strtrim`](src/str/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](src/str/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](src/sub/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](src/str/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](src/lst/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](src/lst/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](src/lst/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](src/lst/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](src/lst/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](src/lst/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](src/lst/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](src/lst/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](src/lst/ft_lstmap.c)				- apply function to content of all list's elements into new list.

_Note: functions marked with * are bonus functions (not mandatory by the project's subject)._

## 📑 Tools

`@tools`

includes [`get_next_line`](https://github.com/iflis7/get_next_line) and [`printf`](https://github.com/iflis7/ft_printf) functions.


## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

## 📋 Testing

**1. First, configure the path to the libft folder in the Makefile (inside `/testing/`):**

```Makefile
#############################
## Path to Libft directory ##
#############################
DIR		= ../
```

**2. Then run:**

```shell
make 
```

### Third-party testers

* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
* [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)

[![hsaadi's 42 Libft Score](https://badge42.vercel.app/api/v2/cl5s2p211013909jutf782quk/project/2544755)](https://github.com/JaeSeoKim/badge42)
