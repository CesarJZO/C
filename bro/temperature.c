#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float convert2celsius(float farenheit)
{
    return (farenheit - 32) * 5/9;
}

float convert2farenheit(float celsius)
{
    return (celsius * 9/5) + 32;
}

int main(int argc, char const *argv[])
{
    if (argc == 3 && argv[1][0] == '-')
    {
        float celsius, farenheit;
        switch (tolower(argv[1][1]))
        {
        case 'f':
            celsius = convert2celsius(atof(argv[2]));
            printf("%s°F is equal to %.2f°C\n", argv[2], celsius);
            break;
        case 'c':
            farenheit = convert2farenheit(atof(argv[2]));
            printf("%s°C is equal to %.2f°F\n", argv[2], farenheit);
            break;
        default:
            printf("Usage: temperature [TYPE] [TEMP]\n\t-c for celsius\n""\t-f for farenheit\n");
            return 1;
            break;
        }
    }
    return 0;
}
