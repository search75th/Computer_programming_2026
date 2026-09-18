#include <stdio.h>

int sum_cubes(int start, int end)
{
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        sum = sum + i * i * i;
    }

    return sum;
}

int main(void)
{
    int start, end;

    printf("Enter the two integers (start end): ");
    scanf("%d %d", &start, &end);

    printf("Sum of cubes from %d to %d is %d\n",
           start, end, sum_cubes(start, end));

    return 0;
}
