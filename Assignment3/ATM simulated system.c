#include <stdio.h>

int main()
{
    // Variable declarations
    // balance stores the current account balance
    // choice stores the user's menu selection
    // amount stores deposit or withdrawal amount
    float balance = 1000.0;
    float amount;
    int choice;

    // This loop keeps displaying the ATM menu
    // until the user chooses to exit
    while(1)
    {
        printf("\n===== ATM SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // switch statement selects an action
        // based on the user's choice
        switch(choice)
        {
            // Displays the current balance
            case 1:
                printf("Current Balance: %.2f\n", balance);
                break;

            // Deposits money into the account
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                // Checks if the entered amount is valid
                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Deposit Successful!\n");
                    printf("New Balance: %.2f\n", balance);
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            // Withdraws money from the account
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                // Checks if withdrawal amount is positive
                if(amount > 0)
                {
                    // Checks if there is enough balance
                    if(amount <= balance)
                    {
                        balance = balance - amount;
                        printf("Withdrawal Successful!\n");
                        printf("Remaining Balance: %.2f\n", balance);
                    }
                    else
                    {
                        printf("Insufficient Balance!\n");
                    }
                }
                else
                {
                    printf("Invalid Amount!\n");
                }
                break;

            // Terminates the program
            case 4:
                printf("Thank you for using the ATM!\n");
                return 0;

            // Handles invalid menu choices
            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}
