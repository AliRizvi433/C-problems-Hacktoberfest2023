#include <stdio.h>
int main()
{
    int byear, bmonth;

    printf("Enter your birthyear - ");
    scanf("%d", &byear);

    int age = 2023 - byear;
    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("you are not elegible to vote.");
    }
}