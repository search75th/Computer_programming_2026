#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);
    }

    for (i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d. score %.1f\n",
               i + 1, s[i].name, s[i].age, s[i].score);
    }

    return 0;
}