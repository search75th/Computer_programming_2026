#include <stdio.h>
#include <ctype.h>

void count_characters(char str[])
{
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
        {
            uppercase++;
        }
        else if (islower(str[i]))
        {
            lowercase++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
    }

    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
}

int main(void)
{
    char str[100];

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    printf("Output:\n");
    count_characters(str);

    return 0;
}
