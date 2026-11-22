#include <stdio.h>

// Global variables, so tutazideclare kabla int main
int storedPIN = 1234;
double balance = 5000.00;

// Function prototypes(give more info abt the functions,,,sa ka showmenu doesnt have a return type)
int login();
void showMenu();
void checkBalance();
void deposit(double amount);
void withdraw(double amount);

int main()
{
    int choice;
    double amount;

    // we deal with the login requirement;
    if (login() == 0)
    {
        printf("Access denied. Exiting...\n");
        return 0;
    }

    //if login is successful the the compiler continues auto to the do...while
    do
    {
        showMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

// we also have to deal with login pin na attempts
int login()
{
    int pin;
    int attempts = 0;

    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == storedPIN)
        {
            printf("Login successful!\n");
            return 1;
        }
        else
        {
            attempts++;
            printf("Wrong PIN. Attempts remaining: %d\n",
                   3 - attempts);
        }
    }

    return 0;
}

// show menu again lakini ya pin correctness
void showMenu()
{
    printf("\n===== ATM MENU =====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

// we check balance
void checkBalance()
{
    printf("Your current balance is: %.2lf\n", balance);
}

// depositing
void deposit(double amount)
{
    if (amount > 0)
    {
        balance = balance + amount;
        printf("Deposit successful!\n");
        printf("New balance: %.2lf\n", balance);
    }
    else
    {
        printf("Invalid amount. Enter a positive amount.\n");
    }
}

// withdrawal
void withdraw(double amount)
{
    if (amount <= 0)
    {
        printf("Invalid amount. Enter a positive amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawal successful!\n");
        printf("Remaining balance: %.2lf\n", balance);
    }
}
