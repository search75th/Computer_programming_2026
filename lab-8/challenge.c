#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_NAME 100

double calculate_average(int grades[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += grades[i];
    }

    return (double)sum / n;
}

int find_highest(int grades[], int n)
{
    int highest = 0;

    for (int i = 1; i < n; i++)
    {
        if (grades[i] > grades[highest])
        {
            highest = i;
        }
    }

    return highest;
}

int find_lowest(int grades[], int n)
{
    int lowest = 0;

    for (int i = 1; i < n; i++)
    {
        if (grades[i] < grades[lowest])
        {
            lowest = i;
        }
    }

    return lowest;
}

char get_letter_grade(int grade)
{
    if (grade >= 80)
    {
        return 'A';
    }
    else if (grade >= 70)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}

int main(void)
{
    int n;
    char names[MAX_STUDENTS][MAX_NAME];
    int grades[MAX_STUDENTS];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%99s", names[i]);

        printf("Enter grade of %s: ", names[i]);
        scanf("%d", &grades[i]);
    }

    int highest = find_highest(grades, n);
    int lowest = find_lowest(grades, n);

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", calculate_average(grades, n));

    printf("Highest grade: %d (%s)\n",
           grades[highest], names[highest]);

    printf("Lowest grade: %d (%s)\n",
           grades[lowest], names[lowest]);

    printf("Students who passed:\n");

    for (int i = 0; i < n; i++)
    {
        if (grades[i] >= 60)
        {
            printf("%s - Grade %c\n",
                   names[i], get_letter_grade(grades[i]));
        }
    }

    return 0;
}
