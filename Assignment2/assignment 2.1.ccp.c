#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i;
    //asking the user for number of students
    printf("enter number of students: ");
    scanf("%d", &N);

    //loop through N students
    for (int i = 1; i <= N; i++){
    int regNo;
    int marks;
    char name[50];
    char grade;
     printf("\n--- student %d ---\n", i);
     printf("Enter registration number: ");
     scanf("%d", &regNo);
     printf("Enter name: ");
     scanf("%s", name);
     printf("enter marks; ");
     scanf("%d", &marks);

     //grade calculation using if-else-if
     if (marks >= 70 && marks <= 100){
        grade = 'A';
     } else if (marks >= 60) {
        grade = 'B';
     } else if (marks >= 50){
        grade = 'C';
     } else if (marks >= 40){
        grade = 'D';
     } else{
        grade = 'F';
     }

     //OUTPUT finally
     printf("\n-------------------------\n");
     printf("     STUDENT INFORMATION    \n");
     printf("---------------------------\n");
     printf("Registration No: %d\n", regNo);
     printf("Name: %s\n", name);
     printf("Marks: %d\n", marks);
     printf("Grade: %c\n", grade);

     //pass and fail status now
     if (marks >= 40) {
        printf("Status: Passed\n");
     } else {
        printf("Status: Failed\n");
     }

        printf("--------------------------\n");
    }









    return 0;
}
