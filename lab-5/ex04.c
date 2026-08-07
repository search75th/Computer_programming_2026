#include <stdio.h>

int main() {
    int numbers[10];
    int even = 0, odd = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}