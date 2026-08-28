#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student s[3];
    int i, max;

    for (i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);

        printf("\n");
    }

    max = 0;

    for (i = 1; i < 3; i++) {
        if (s[i].score > s[max].score) {
            max = i;
        }
    }

    printf("The highest scores belongs to %s at %.1f scores!\n",
           s[max].name, s[max].score);

    return 0;
}