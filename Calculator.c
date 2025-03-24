#include <stdio.h>

void displayMenu() {
    printf("\n========================\n");
    printf("     SIMPLE CALCULATOR     \n");
    printf("========================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");
    printf("========================\n");
    printf("\nEnter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;
    int intNum1, intNum2, modResult;

    do {
        displayMenu();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            if (choice == 5) {
                printf("\nEnter first integer: ");
                scanf("%d", &intNum1);
                printf("Enter second integer: ");
                scanf("%d", &intNum2);
            } else {
                printf("\nEnter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
            }
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero is not allowed!\n");
                    continue;
                }
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 5:
                if (intNum2 != 0)
                    modResult = intNum1 % intNum2;
                else {
                    printf("Error: Modulus by zero is not allowed!\n");
                    continue;
                }
                printf("\nResult: %d %% %d = %d\n", intNum1, intNum2, modResult);
                break;
            case 6:
                printf("Exiting the calculator. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 6.\n");
        }
    } while (choice != 6);

    return 0;
}
