## Data types

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
