#include <stdio.h>

struct Student {
    char name[21];
    int id;
    float grades[4];
};

int main() {
    struct Student students[3];
    char subjects[4][10] = {"Math", "English", "Science", "History"};

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%20s %d", students[i].name, &students[i].id);

        for (int j = 0; j < 4; j++) {
            scanf("%f", &students[i].grades[j]);
        }
        printf("\n");
    }

    float averages[3];

    printf("Student Averages:\n");

    for (int i = 0; i < 3; i++) {
        float sum = 0;

        for (int j = 0; j < 4; j++) {
            sum += students[i].grades[j];
        }

        averages[i] = sum / 4;

        printf("%s (ID: %d): %.2f\n",
               students[i].name,
               students[i].id,
               averages[i]);
    }

    int topStudent = 0;

    for (int i = 1; i < 3; i++) {
        if (averages[i] > averages[topStudent]) {
            topStudent = i;
        }
    }

    printf("\nTop Student: %s with %.2f\n",
           students[topStudent].name,
           averages[topStudent]);

    float subjectAverages[4];

    printf("\nSubject Averages:\n");

    for (int j = 0; j < 4; j++) {
        float sum = 0;

        for (int i = 0; i < 3; i++) {
            sum += students[i].grades[j];
        }

        subjectAverages[j] = sum / 3;

        printf("%s: %.2f\n",
               subjects[j],
               subjectAverages[j]);
    }

    int topSubject = 0;

    for (int j = 1; j < 4; j++) {
        if (subjectAverages[j] > subjectAverages[topSubject]) {
            topSubject = j;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n",
           subjects[topSubject],
           subjectAverages[topSubject]);

    return 0;
}