# Utilities

## Coloring output

Examples

```c
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
```

Using them without `#define`

```c
void showoutput(char *message)
{
  printf(ANSI_COLOR_YELLOW "Warning: You are pretty stupid");
  printf("\x1b[31" "You are an error");
}
```

## Add executables to PATH

1. Create a folder to store the executable files

```bash
$ mkdir ~/.bin
```

2. Add that folder to PATH for all sessions of Bash

```bash
$ vim ~/.bashrc
```

```bash
# Add this to the end of .bashrc file
export PATH="~/.bin:$PATH"
```

3. Add either the executable files or symlinks to them into `~/.bin`

4. Restart terminal session or run this:

```bash
$ source ~/.bashrc
```

## References

- [stdlib and colored output in C](https://stackoverflow.com/questions/3219393/stdlib-and-colored-output-in-c) from Stack Overflow
- [How do I add an executable to my search path?](https://askubuntu.com/questions/322772/how-do-i-add-an-executable-to-my-search-path) from Ask Ubuntu
