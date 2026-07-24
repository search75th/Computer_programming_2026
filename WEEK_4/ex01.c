#include <stdio.h>

int main() {
    char name[50];
    int studentID;
    float lab, midterm, final, total;

    // Input
    printf("Enter your Name Surname : ");
    scanf(" %[^\n]", name);

    printf("Enter your Student ID : ");
    scanf("%d", &studentID);

    printf("Enter your Score\n");

    printf("Laboratory (15%%) = ");
    scanf("%f", &lab);

    printf("Midterm (35%%) = ");
    scanf("%f", &midterm);

    printf("Final (50%%) = ");
    scanf("%f", &final);

    total = lab + midterm + final;

    printf("\nName : %s\n", name);
    printf("Student ID : %d\n", studentID);
    printf("Total (100%%) = %.0f\n", total);

    return 0;
}