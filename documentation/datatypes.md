## Data types

### Supported data types

- `char` single character `%c`
- `char[]` a.k.a. string, but actually is an array of integers `%s`
- `float` 4 bytes for 32 bits of precision `%f`
- `double` 8 bytes for 64 bits of precision `%lf`
- `bool` 1 byte %d
- `short` 2 bytes (-32,768 to 32,767) `%d`
- `int` 4 bytes (-2,147,483 to 2,147,483,647) `%d` or `%u` if unsigned. It's implicity a long
- `long` 8 bytes (a lot to a lot) `%lld` or `%llu` if unsigned

If you write something out of the limits of a data type, it starts again from the lowest value, like a sinus function.

> Pro tip: if you use the `unsigned` keyword, you can only store positive numbers on that variable. By default they are signed.

<br>

### Bools

Booleans need to include `<stdbool.h>` in order to work.

```c
#include <stdbool.h>
int main() {
  bool sheLovesMe = false;
  return 1;
}
```

<br>

### Chars

Since C is not object-oriented, it doesn't have a string type, so you need to use a char array.

```c
int main {
  char name[] = "César"
}
```

You can use formatters to show a char as a number or an *ASCII* character, but it has to be a number between -128 to 127 (see [`chars.c`](../src/tests/chars.c))

```c
#include <stdio.h>
int main() {
  char c = 69;
  printf("Number: %d\n", c);
  printf("Character: %c\n", c);
}
```

Output:

```
Number: 69
Character: E
```
