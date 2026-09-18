#include <stdio.h>

int is_armstrong(int num)
{
    int original = num;
    int sum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }

    return sum == original;
}

int main(void)
{
    int start, end;
    int temp;
    int count = 0;
    int sum = 0;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        temp = start;
        start = end;
        end = temp;
    }

    printf("The Armstrong numbers within the interval [%d, %d] are:\n",
           start, end);

    for (int i = start; i <= end; i++)
    {
        if (i >= 0 && is_armstrong(i))
        {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }

    printf("\nTotal Armstrong numbers: %d\n", count);
    printf("Sum of Armstrong numbers: %d\n", sum);

    return 0;
}
