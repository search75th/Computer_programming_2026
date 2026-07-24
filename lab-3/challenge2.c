#include <stdio.h>

float Grade(int score, char *letter) {
    if (score >= 80) {
        *letter = 'A';
        return 4.0;
    } else if (score >= 70) {
        *letter = 'B';
        return 3.0;
    } else if (score >= 60) {
        *letter = 'C';
        return 2.0;
    } else if (score >= 50) {
        *letter = 'D';
        return 1.0;
    } else {
        *letter = 'F';
        return 0.0;
    }
}

int main() {
    int calculus, physics, compro;
    char grade;
    float calGrade, phyGrade, comGrade, gpa;

    printf("Calculus score: ");
    scanf("%d", &calculus);

    printf("Physic score: ");
    scanf("%d", &physics);

    printf("compro score: ");
    scanf("%d", &compro);

    printf("\nSubject        Score   Grade   Grade\n");
    printf("--------------------------------------\n");

    calGrade = Grade(calculus, &grade);
    printf("%-15s %-7d %-7c %.1f\n", "Cal", calculus, grade, calGrade);

    phyGrade = Grade(physics, &grade);
    printf("%-15s %-7d %-7c %.1f\n", "Physics", physics, grade, phyGrade);

    comGrade = Grade(compro, &grade);
    printf("%-15s %-7d %-7c %.1f\n", "compro", compro, grade, comGrade);

    gpa = (calGrade + phyGrade + comGrade) / 3;

    printf("--------------------------------------\n");
    printf("GPA: %.1f\n", gpa);

    return 0;
}