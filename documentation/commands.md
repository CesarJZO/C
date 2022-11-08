# Commands

## Compile a file

```bash
$ gcc <file>
```

This will generate an `a.out` file, which is the executable

```bash
$ ls
a.out
```

If you want to specify the file output, use the flag `-o`. Normally, in UNIX-based operating systems, you would want to make the output file without extension, like `-o program`

```bash
$ gcc <file.c> -o <exe_file>
```

When using Windows, the file executable should have a `.exe` extension

```powershell
> gcc <file.c> -o <file.exe>
```
