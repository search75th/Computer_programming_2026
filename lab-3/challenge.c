#include <stdio.h>

int main() {
    int calculus, physics, compro;
    char grade;
    float Grade;
    float gpa;


    // Input scores
    printf("Calculus score: ");
    scanf("%d", &calculus);

    printf("Physic score: ");
    scanf("%d", &physics);

    printf("compro score: ");
    scanf("%d", &compro);

    // Function-like logic for each subject
    printf("\nSubject        Score   Grade   Grade\n");
    printf("--------------------------------------\n");

    // Calculus
    if (calculus >= 80) {
        grade = 'A';
        Grade = 4.0;
    } else if (calculus >= 70) {
        grade = 'B';
        Grade = 3.0;
    } else if (calculus >= 60) {
        grade = 'C';
        Grade = 2.0;
    } else if (calculus >= 50) {
        grade = 'D';
        Grade = 1.0;
    } else {
        grade = 'F';
        Grade = 0.0;
    }
    printf("%-15s %-7d %-7c %.1f\n", "Cal", calculus, grade, Grade);

    // Physics
    if (physics >= 80) {
        grade = 'A';
        Grade = 4.0;
    } else if (physics >= 70) {
        grade = 'B';
        Grade = 3.0;
    } else if (physics >= 60) {
        grade = 'C';
        Grade = 2.0;
    } else if (physics >= 50) {
        grade = 'D';
        Grade = 1.0;
    } else {
        grade = 'F';
        Grade = 0.0;
    }
    printf("%-15s %-7d %-7c %.1f\n", "Physics", physics, grade, Grade);

    // Computer Programming
    if (compro >= 80) {
        grade = 'A';
        Grade = 4.0;
    } else if (compro >= 70) {
        grade = 'B';
        Grade = 3.0;
    } else if (compro >= 60) {
        grade = 'C';
        Grade = 2.0;
    } else if (compro >= 50) {
        grade = 'D';
        Grade = 1.0;
    } else {
        grade = 'F';
        Grade = 0.0;
    }
    printf("%-15s %-7d %-7c %.1f\n", "compro", compro, grade, Grade);

    // Calculate GPA
    float calGrade, phyGrade, comGrade;

    if (calculus >= 80)
        calGrade = 4.0;
    else if (calculus >= 70)
        calGrade = 3.0;
    else if (calculus >= 60)
        calGrade = 2.0;
    else if (calculus >= 50)
        calGrade = 1.0;
    else
        calGrade = 0.0;

    if (physics >= 80)
        phyGrade = 4.0;
    else if (physics >= 70)
        phyGrade = 3.0;
    else if (physics >= 60)
        phyGrade = 2.0;
    else if (physics >= 50)
        phyGrade = 1.0;
    else
        phyGrade = 0.0;

    if (compro >= 80)
        comGrade = 4.0;
    else if (compro >= 70)
        comGrade = 3.0;
    else if (compro >= 60)
        comGrade = 2.0;
    else if (compro >= 50)
        comGrade = 1.0;
    else
        comGrade = 0.0;

    gpa = (calGrade + phyGrade + comGrade) / 3;

    printf("--------------------------------------\n");
    printf("GPA: %.1f\n", gpa);

    return 0;
}