#include <stdio.h>

int main() {
    char ch;
    int asciiValue;

    // Accepting a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Printing ASCII value in decimal, hexadecimal, and octal formats
    asciiValue = (int)ch;
    printf("Decimal ASCII value: %d\n", asciiValue);
    printf("Hexadecimal ASCII value: %X\n", asciiValue);
    printf("Octal ASCII value: %o\n", asciiValue);

    // Accepting ASCII value from the user
    printf("\nEnter an ASCII value: ");
    scanf("%d", &asciiValue);

    // Printing the character for the ASCII value
    printf("Character for ASCII value %d: %c\n", asciiValue, (char)asciiValue);

    return 0;
}

