#include <stdio.h>

int main()
{
    int balance = 50000;
    int amount;

    while (1)
    {
        printf("\nCurrent Balance = %d\n", balance);

        printf("Enter withdrawal amount (0 to exit): ");
        scanf("%d", &amount);

        if (amount == 0)                        
        {
            printf("Thank you! Visit again.\n");
            break;
        }

        if (amount < 0)
        {
            printf("Invalid amount!\n");
        }
        else if (amount > balance)
        {
            printf("Insufficient balance!\n");
        }
        else
        {
            balance = balance - amount;
            printf("Withdrawal successful!\n");
            printf("Remaining Balance = %d\n", balance);
             printf("Thank you! Visit again.\n");
        }
    }

    return 0;
}