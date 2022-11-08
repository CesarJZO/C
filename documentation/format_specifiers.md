# Format specifiers

Defines and formats a type of data to be displayed.  
It uses a `%` and a character to specify the format.

- `%c` character
- `%s` string (array of characters)
- `%f` float
- `%lf` long float (double)
- `&u` unsigned
- `%l` long
- `%d` integer
- `%o` octal
- `%x` hexadecimal
- `%%` For `%` itself


## Formatting numbers

`%±x.yc` Sets how a floating point or integer, or a number in general should be displayed, *where*:

- `x` is the number (or size) of digits. Implicitly has a right align
- `y` is the number of decimals
- `c` is the format specifier
- `±` specifies the alignment, `-` meaning left and `+` right

## Example of floats

```c
#include <stdio.h>

int main() {
  float prices[] = {59.99, 5.4954218};
  int length = sizeof(prices) / sizeof(float);

  for (int i = 0; i < length; i++)
    printf("Price %d: %8.2f\n", i+1, prices[i]);
}
```

Output

```
Price 1:    59.99
Price 2:     5.50
```

## Example of integers

```c
#include <stdio.h>

int main() {
  int nums[] = {125, 4, 82};
  int length = sizeof(nums) / sizeof(int);

  for (int i = 0; i < length; i++)
    printf("Num %d: %4d\n", i, nums[i]);
}
```

Output

```
Num 0:  125
Num 1:    4
Num 2:   82
```
