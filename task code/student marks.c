#include <stdio.h>

int main()
{
    char name[50];
    int maths , phy , sci , guj , eng;
    int total;
    float percentage;

    printf("ënter name");
    scanf("%s",name);

    printf("Enter marks of maths: ");
    scanf("%d", &maths);

    printf("Enter marks of phy: ");
    scanf("%d", &phy);

    printf("Enter marks of sci: ");
    scanf("%d", &sci);

    printf("Enter marks of guj: ");
    scanf("%d", &guj);

    printf("Enter marks of eng: ");
    scanf("%d", &eng);

    total = maths + phy + sci + guj + eng;

    percentage = total / 5.0;

    printf("\n--- Student Result ---\n");
    printf("Total Marks = %d\n", total);
    printf("Percentage  = %.2f%%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade = A\n");
    }
    else if (percentage >= 75)
    {
        printf("Grade = B\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade = C\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade = D\n");
    }
    else
    {
        printf("Grade = F\n");
    }

    if (percentage >= 40)
    {
        printf("Result = PASS\n");
    }
    else
    {
        printf("Result = FAIL\n");
    }

    return 0;
}