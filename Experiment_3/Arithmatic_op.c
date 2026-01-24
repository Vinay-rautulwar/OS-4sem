#include <stdio.h>

int main() {
    int a, b, year;
    char op;

    printf("\n\t\t\t\t--------- Which operation you want to do ---------\n");
    printf("Enter +  -  *  /  %%  e (Even/Odd)  l (Leap Year)\n");
    printf("Your choice: ");
    scanf(" %c", &op);   // space before %c is important

    switch (op) {

        case '+':
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Sum is: %d\n", a + b);
            break;

        case '-':
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Difference is: %d\n", a - b);
            break;

        case '*':
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Product is: %d\n", a * b);
            break;

        case '/':
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            if (b != 0)
                printf("Division is: %d\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;

        case '%':
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Remainder is: %d\n", a % b);
            break;

        case 'e':
            printf("Enter a number: ");
            scanf("%d", &a);
            if (a % 2 == 0)
                printf("Number is Even\n");
            else
                printf("Number is Odd\n");
            break;

        case 'l':
            printf("Enter year: ");
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                printf("Leap Year\n");
            else
                printf("Not a Leap Year\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

