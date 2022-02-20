#include <stdio.h>
#include <string.h>

int main() {
    char name[32]; // [maxLength]
    printf("What's your name? ");
    // scanf("%s", name);
    fgets(name, 32, stdin);
    name[strlen(name)-1] = '\0';

    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello, %s! You are %d years old.\n", name, age);
}
