#include <stdio.h>

int main() {
    int choice;
    int balance = 0;
    int money;

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Balance = %d\n", balance);
        }

        else if (choice == 2) {
            printf("Enter money: ");
            scanf("%d", &money);
            balance += money;
        }

        else if (choice == 3) {
            printf("Enter money: ");
            scanf("%d", &money);

            if (money <= balance) {
                balance -= money;
            } else {
                printf("Not enough money!\n");
            }
        }

        else if (choice == 4) {
            printf("Bye!\n");
        }

        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}