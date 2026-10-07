#include <stdio.h>
#include <stdlib.h>

int main() {
    int pin;
    const int CORRECT_PIN = 1234; // Set default correct 4-digit PIN
    int attempts = 3;
    int choice;

    // Loop for up to 3 PIN entry attempts
    while (attempts > 0) {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);

        // Check if PIN has exactly 4 digits
        if (pin < 1000 && pin > 9999) {
            printf("PIN must have 4 digits.\n\n");
            continue;
        }

        // Directly compare pin with CORRECT_PIN
        if (pin == CORRECT_PIN) {
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Incorrect PIN. Remaining attempts: %d\n\n", attempts);
            }
        }
    }

    // Lock system for 30 seconds if all 3 attempts failed
    if (pin != CORRECT_PIN) {
        printf("\nSystem locked! Wait for 5 seconds...\n");
        for (int i = 5; i >= 1; i--) {
            printf("%d...\n", i);
            fflush(stdout);
            sleep(1);
        }
        printf("You can try again now.\n");
        return 0;
    }

    // Display device menu upon successful PIN entry
    printf("\n=== Device Menu ===\n");
    printf("1. Open Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    // Process user choice using if-else if-else
    if (choice == 1) {
        printf("Access granted. Door unlocked\n");
    } else if (choice == 2) {
        printf("Change username feature coming soon.\n");
    } else if (choice == 3) {
        printf("Change PIN feature coming soon.\n");
    } else if (choice == 4) {
        printf("Exiting system.\n");
    } else {
        printf("Invalid option! Please try again.\n");
    }

    return 0;
}
