#include <stdio.h>

int sum_positive(int numbers[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > 0)
        {
            sum += numbers[i];
        }
    }

    return sum;
}

int sum_negative(int numbers[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < 0)
        {
            sum += numbers[i];
        }
    }

    return sum;
}

int count_positive(int numbers[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > 0)
        {
            count++;
        }
    }

    return count;
}

int count_negative(int numbers[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < 0)
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    int n;
    int numbers[100];

    printf("N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%d", &numbers[i]);
    }

    int positive_sum = sum_positive(numbers, n);
    int negative_sum = sum_negative(numbers, n);

    int positive_count = count_positive(numbers, n);
    int negative_count = count_negative(numbers, n);

    printf("Output:\n");

    if (positive_count > 0)
    {
        printf("Positive numbers -> Sum: %d, Average: %.2f\n",
               positive_sum,
               (double)positive_sum / positive_count);
    }
    else
    {
        printf("Positive numbers -> Sum: 0, Average: N/A\n");
    }

    if (negative_count > 0)
    {
        printf("Negative numbers -> Sum: %d, Average: %.2f\n",
               negative_sum,
               (double)negative_sum / negative_count);
    }
    else
    {
        printf("Negative numbers -> Sum: 0, Average: N/A\n");
    }

    return 0;
}
