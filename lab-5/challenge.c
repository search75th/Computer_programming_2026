#include <stdio.h>

int main() {
    int n;
    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < n; i++) {
        int counted = 0;
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                counted = 1;
                break;
            }
        }

        if (!counted) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (num[i] == num[j]) {
                    count++;
                }
            }
            printf("Element %d occurs %d times\n", num[i], count);
        }
    }

    return 0;
}