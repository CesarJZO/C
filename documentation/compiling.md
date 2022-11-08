# Compiling

- [Getting the compiler](#getting-the-compiler)
    - [Linux](#linux)
    - [Windows](#windows)
    - [macOs](#macos)
- [Checking the installation](#checking-the-installation)
- [Compiling a program](#compiling-a-program)

## Getting the compiler

### Linux

If you are using a Debian-based distribution, you can use this command making sure that you have your *package manager* up-to-date

```bash
apt install build-essential
```

On Arch-based distros, use the `pacman` package manager

```bash
pacmman -S gcc
```

> After you have the compiler, check if the installation process was successful on [Checking the installation](#checking-the-installation)

### Windows

If you are a Windows user, things won't be as simple as that, one way to get the `GCC` compiler is though [MSYS2](https://www.msys2.org/), which is a collections of tools and libraries that run natively on *Windows*.

First you need to follow the instructions from the [MSYS2 website](https://www.msys2.org/), once you have open that terminal, probably you have pasted this command, which installs the `gcc` compiler

```bash
$ pacman -S mingw-w64-ucrt-x86_64-gcc
```

After that, you should add the compiler to your `PATH` variable by going to your *Environment Variables*

The way I get there is typing *"path"* on the windows search bar on start menu, then I open *"Edit the system environment variables"*

In the *System Properties* window, click on `Environment Variables`, then **Path** **>** `Edit...` **>** `New` and paste **C:\msys64\mingw64\bin** which is where the `gcc` compiler is installed

> After you have the compiler, check if the installation process was successful on [Checking the installation](#checking-the-installation)

### macOs

I don't have a mac `:)`

But it think you should look for the `clang` compiler. Good luck!

## Checking the installation

No matter what operating system you are using, paste this in your shell (**Bash**, **PowerShell**, **zsh**...)

```PowerShell
gcc --version
```

It should print the current version and some info

## Compiling a program

Finally, you can compile your *hello world*, you just need to execute the `gcc` command using your **c file** as an argument

```bash
$ gcc <file>
```

This will generate an `a.out` file, which is the executable

```bash
$ ls
a.out
```

If you want to specify the file output, use the flag `-o`. Normally, in *UNIX-based* operating systems, you would want to make the output file without extension, like `-o program`

```bash
$ gcc <file.c> -o <exe_file>
```

When using Windows, the file executable should have a `.exe` extension

```powershell
> gcc <file.c> -o <file.exe>
```
