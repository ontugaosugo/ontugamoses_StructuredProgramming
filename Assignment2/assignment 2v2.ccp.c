#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;


    // Ask user for the number of students
    //VERSION 2
    printf("Enter number of students: ");
    scanf("%d", &N);

    // Loop through N students
    for (int i = 1; i <= N; i++) {
        int regNo, marks;
        char name[50];
        char grade;

        printf("\n--- Student %d ---\n", i);
        printf("Enter Registration No: ");
        scanf("%d", &regNo);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Marks: ");
        scanf("%d", &marks);

        // Grade calculation using switch-case (marks / 10)
        switch (marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;
            case 6:
                grade = 'B';
                break;
            case 5:
                grade = 'C';
                break;
            case 4:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }

        // Output Formatted Student Information
        printf("\n-----------------------------------\n");
        printf("         STUDENT INFORMATION       \n");
        printf("-----------------------------------\n");
        printf("Registration No: %d\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Pass/Fail Status
        if (marks >= 40) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
        printf("-----------------------------------\n");
    }

    return 0;
}
