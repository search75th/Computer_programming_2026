#include <stdio.h>

struct Time {
    int minute;
    int seconds;
};

int main() {
    struct Time time[3];
    int total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Time (m:s): ");
        scanf("%d:%d", &time[i].minute, &time[i].seconds);

        total += time[i].minute * 60 + time[i].seconds;
    }

    printf("Total time elapsed: %d second(s)\n", total);

    return 0;
}