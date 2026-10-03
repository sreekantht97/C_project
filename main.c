#include <stdio.h>

void biggest3(void);
void factorial(void);
void palindrome(void);

int main(void)
{
    int choice;

    printf("\nC Project\n");
    printf("1. Biggest of 3 numbers\n");
    printf("2. Factorial\n");
    printf("3. Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            biggest3();
            break;

        case 2:
            factorial();
            break;

        case 3:
            palindrome();
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
