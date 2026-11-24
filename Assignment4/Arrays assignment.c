#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5 // Matches the example workflow for Task 7

// Function Prototypes
void task1_reverseDisplay();
void task2_sumCalculation();
void task3_printUnique();
void task4_findMaxMin();
void task5_sortAscending();
void task6_insertUnsorted();
void task7_circularDataLogger();
void task8_traverse2DArray();

// Helper functions for Task 7 (Circular Data Logger)
void insertSample(int buffer[], int *head, int *count, int value);
void printChronological(int buffer[], int head, int count);

int main() {
    int choice;

    while (1) {
        printf("\n=========================================\n");
        printf("      ASSIGNMENT 4 - ARRAYS MENU\n");
        printf("=========================================\n");
        printf("1. Array Reverse Display\n");
        printf("2. Array Sum Calculation\n");
        printf("3. Print Unique Elements\n");
        printf("4. Find Maximum & Minimum\n");
        printf("5. Sort Array Ascending\n");
        printf("6. Insert in Unsorted Array\n");
        printf("7. Circular Data Logger\n");
        printf("8. 2D Array Traversal\n");
        printf("0. Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter your choice (0-8): ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        printf("\n");
        switch (choice) {
            case 1: task1_reverseDisplay(); break;
            case 2: task2_sumCalculation(); break;
            case 3: task3_printUnique(); break;
            case 4: task4_findMaxMin(); break;
            case 5: task5_sortAscending(); break;
            case 6: task6_insertUnsorted(); break;
            case 7: task7_circularDataLogger(); break;
            case 8: task8_traverse2DArray(); break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:   //if none of the elements above is picked,,,,
                printf("Invalid choice! Please select between 0 and 8.\n");
        }
    }
    return 0;
}

// 1. Array Reverse Display(tutatumia a reversed for loop of i)
void task1_reverseDisplay() {
    int n;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d number of elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values store into the array are : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are : ");
    for (int i = n - 1; i >= 0; i--) {   //for loop reverserd so loop reversed
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 2. Array Sum Calculation
void task2_sumCalculation() {    //calling func
    int n, sum = 0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {  //normal array accessing...assending to desending
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements stored in the array is : %d\n", sum);
}

// 3. Print Unique Elements
void task3_printUnique() {
    int n;
    printf("Print all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {   //normal asseccing
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {     //introducing the *j* for comparison
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 4. Find Maximum & Minimum
void task4_findMaxMin() {
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);
}

// 5. Sort Array Ascending               means tuko na 1.a teporary value to be stored so.....include int temp
void task5_sortAscending() {                      //   2.comparing 2 adjacent integers should have for ya i na j separately
    int n;
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Bubble Sort                                      ****i controls passes and j controlls the number of comparisons
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Elements of array in sorted ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 6. Insert in Unsorted Array
void task6_insertUnsorted() {
    int n, val, pos;          //we must also include the value and position of the integer tunaeka
    printf("Input the size of array : ");
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for the inserted element
    printf("Input %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the value to be inserted : ");
    scanf("%d", &val);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    printf("The current list of the array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift elements right (pos is 1-based index per test data: pos 2 inserts at index 1)
    if (pos < 1 || pos > n + 1) {        // or---we add meaning **AT LEAST** 1 condition MUST be true
        printf("\nInvalid position!\n");
        return;
    }
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;        // we should assume what we looking for takes index 1,,,,,,so
    n++;                       //index 0=1-1....-1??????????

    printf("\nAfter Insert the element the new list is : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 7. Circular Data Logger Helpers & Main Logic
void insertSample(int buffer[], int *head, int *count, int value) {
    buffer[*head] = value;
    *head = (*head + 1) % BUFFER_SIZE; // Wrap around circularly
    if (*count < BUFFER_SIZE) {
        (*count)++;
    }
}

void printChronological(int buffer[], int head, int count) {
    if (count == 0) {
        printf("Buffer is empty.\n");
        return;
    }
    // If full, 'head' points to the oldest element; otherwise, index 0 is oldest
    int oldest = (count == BUFFER_SIZE) ? head : 0;

    printf("Chronological samples (oldest -> newest): ");
    for (int i = 0; i < count; i++) {
        int idx = (oldest + i) % BUFFER_SIZE;
        printf("%d ", buffer[idx]);
    }
    printf("\n");
}

void task7_circularDataLogger() {
    int buffer[BUFFER_SIZE] = {0};
    int head = 0;  // Next write index
    int count = 0; // Total elements currently stored
    int val;

    printf("--- Circular Data Logger (BUFFER_SIZE = %d) ---\n", BUFFER_SIZE);
    printf("Enter sensor values continuously (enter -1 to stop and print):\n");

    while (1) {
        printf("Enter sensor value: ");
        scanf("%d", &val);
        if (val == -1) {
            break;
        }
        insertSample(buffer, &head, &count, val);
    }

    printChronological(buffer, head, count);
}

// 8. 2D Array Traversal
void task8_traverse2DArray() {
    int matrix[6][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    printf("Traversing 6x4 2D Array:\n");
    for (int row = 0; row < 6; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }
}
