#include <stdio.h>

int main()
{
    char name[50];
    int units;
    float bill;

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
    {
        bill = units * 5;
    }
    else if (units <= 200)
    {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Customer Name : %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Final Bill    : %.2f\n", bill);

    return 0;
}