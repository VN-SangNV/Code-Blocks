#include <stdio.h>
#include <stdlib.h>

int main()
{
    char binary[50];
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    itoa(number, binary, 2);
    printf("%s\n", binary);

    number = number << 5;
    itoa(number, binary, 2);
    printf("%s\n", binary);

    number = number >> 9;
    itoa(number, binary, 2);
    printf("%s\n", binary);

    return 0;
}
