#include <stdio.h>

int main()
{
    int d;

    printf("Enter a number from 1 to 9: ");
    scanf("%d", &d);

    switch (d)
    {
        case 1:
            puts("A stitch in time saves nine.");
            break;

        case 2:
        case 6:
        case 9:
            puts("Handsome is as handsome does.");
            break;

        default:
            puts("Very clever. Try again.");
    }

    return 0;
}