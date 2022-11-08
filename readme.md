# ~/C

Here I'll document my journey through C language. In [*Documentation*](#documentation) is the syntax, commands and other stuff that may need to be remembered. In [*Programs*](#programs) are some tests for some exercises or other things.

## Getting started

The first think you'd like to do is a *hello world* program, you can check mine in the [`helloworld.c`](helloworld.c) file, but the least you need to run a **C** program is a `main()` function. Make, for example a file whose name ends in `.c`, such as `hello.c`

```c
#include <stdio.h> // Include information about standard library

int main()         // Define a function named main
{                  // Statements are enclosed in braces
                            // main calls library function printf
  printf("hello, world\n"); // to print this sequence of characters;
                            // \n represents the new line character
}
```

> This example comes from **The C Programming Language** book

Whether any operating system you are using or your text editor, you need a compiler, and you can find instructions about it in [Compiling](./documentation/compiling.md), but if you have it already installed, just use the `gcc` command

```bash
gcc hello.c
```

It will generate an `a.out` file, to execute it use this command

```bash
./a.out
```

Or `a.exe` on Windows

```powershell
.\a.exe
```

## Documentation

- [Syntax](documentation/syntax.md)
- [Compiling](./documentation/compiling.md)
- [Format specifiers](documentation/format_specifiers.md)
- [Data types](documentation/data_types.md)
- [Libraries](documentation/libraries.md)
- [Math functions](documentation/maths.md)
- [Utilities](documentation/utilities.md)

## Programs

- [`helloworld.c`](helloworld.c) It's just a hello world.
- [`circle.c`](circle.c) Circle's area and circumference calculator.
- [`guessnumber.c`](./games/guessnumber.c) You need to guess the number I'm thinking.
- [`minesavoider.c`](games/minesavoider.c) Avoid the mines!
- [`even.c`](tests/even.c) The very first time I use arguments
- [`donut.c`](donut.c) A cool 3D donut rendered with ASCII characters by [Lex Fridman](https://youtu.be/DEqXNfs_HhY)

## Sources

- The C Programming Language [book](https://en.wikipedia.org/wiki/The_C_Programming_Language)
- Bro Code's [youtube playlist](https://youtube.com/playlist?list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe)
- Microsoft's [get started](https://code.visualstudio.com/docs/cpp/config-linux) on linux
- DevDocs' pretty cool [documentation](https://devdocs.io/c/)
