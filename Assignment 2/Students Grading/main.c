#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num_students;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        int reg_no;
        char name[50];
        float marks;
        char grade;

        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Registration Number: ");
        scanf("%d", &reg_no);

        printf("Name: ");
        scanf("%s", name);

        printf("Marks: ");
        scanf("%f", &marks);

        // Determine grade using switch-case (dividing integer marks by 10)
        switch ((int)marks / 10) {
            case 10: // 100
            case 9:  // 90-99
            case 8:  // 80-89
            case 7:  // 70-79
                grade = 'A';
                break;
            case 6:  // 60-69
                grade = 'B';
                break;
            case 5:  // 50-59
                grade = 'C';
                break;
            case 4:  // 40-49
                grade = 'D';
                break;
            default: // Below 40
                grade = 'F';
                break;
        }

        // Display Student Information
        printf("\nSTUDENT INFORMATION\n");
        printf("Registration No: %d\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);

        // Pass/Fail status using if-else
        if (marks >= 40) {
            printf("Status: PASSED\n");
        } else {
            printf("Status: FAILED\n");
        }
    }

    return 0;
}
