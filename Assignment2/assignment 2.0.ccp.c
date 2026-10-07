#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    //PIN BASED DOOR LOCK SYSTEM
    //PART 1; 4 digit pin but use if-else-if statements for the length
    //declare variables as userpin and secretpin...both integers
    int secretpin = 1234;
    int userpin;
    int attempts = 3;
    int choice;
    int pinenteredcorrectly = 0;

    //prompt user for pin
    while (attempts > 0) {
    printf("ENTER YOUR 4 DIGIT PIN: ");
    scanf("%d", &userpin);
    if (userpin < 1000) {
    printf("PIN is too short (must be 4 digits)\n");
    } else if (userpin > 9999) {
    printf("PIN is too long (must be 4 digits)\n");
    } else {
    printf("PIN is exactly 4 digits\n");
    }

    //checking pin correctness
    if (userpin == secretpin) {
        pinenteredcorrectly = 1;
    break; //for eiting the loop
    } else {
        attempts--;
    if (attempts > 0) {
    printf("Incorrect PIN! Remaining attempts: %d\n\n", attempts);
    }
    }
    }

    //what if user failed 3 times??
    if (!pinenteredcorrectly) {
        printf("\nSystem locked! wait for 5 seconds...\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d...", i);
    fflush(stdout);
    sleep(1);  //delays for 1sec
    }
    printf("\nYou can try again now.\n");
    } else {

    //IF SUCCESSFUL
    printf("\n=== DEVICE MENU===\n");
    printf("1. open door\n");
    printf("2. change username\n");
    printf("3. change pin\n");
    printf("4. exit\n");
    printf("5.choose an option: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1: printf("access granted.door unlocked\n"); break;
    case 2: printf("change username feature coming soon.\n"); break;
    case 3: printf("change pin feature coming soon.\n"); break;
    case 4: printf("exiting system.\n"); break;
    default: printf("invalid option! please try again.\n"); break;
        }
    }
    return 0;
}
