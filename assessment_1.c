#include<stdio.h>

// Function declarations
int add(int x, int y); // Function to add two numbers
int subtract(int x, int y); // Function to subtract two numbers
int multiply(int x, int y); // Function to multiply two numbers

// Function to divide two numbers
int division(int x, int y) {
    return x / y;
}

void showMenu(); // Function to display the calculator menu

// Main function
int main() {
    int choice; // Variable to store user's choice
    int number1, number2, ans;// Variables for input numbers and answer
    char again; // Variable to check if user wants to continue

    // Loop to allow multiple operations until user decides to exit
    do {
        showMenu(); // Display calculator menu

        // Prompt user for operation choice
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        // If choice is valid, perform corresponding operation
        if (choice >= 1 && choice <= 4) {
            // Input two numbers
            printf("Enter first number: ");
            scanf("%d", &number1);
            printf("Enter second number: ");
            scanf("%d", &number2);

            // Switch-case to call corresponding function
            switch (choice) {
                case 1:
                    ans = add(number1, number2);
                    printf("ans: %d + %d = %d\n", number1, number2, ans);
                    break;

                case 2:
                    ans = subtract(number1, number2);
                    printf("ans: %d - %d = %d\n", number1, number2, ans);
                    break;

                case 3:
                    ans = multiply(number1, number2);
                    printf("ans: %d * %d = %d\n", number1, number2, ans);
                    break;

                case 4:
                    // Check for division by zero
                    if (number2 != 0) {
                        ans = division(number1, number2);
                        printf("Result: %d / %d = %d\n", number1, number2, ans);
                    } else {
                        printf("Error: Division by zero is not allowed!\n");
                    }
                    break;
            }
        } else {
            // Invalid choice handling
            printf("Invalid choice! Please select a number between 1 and 4.\n");
        }

        // Ask user if they want to perform another operation

