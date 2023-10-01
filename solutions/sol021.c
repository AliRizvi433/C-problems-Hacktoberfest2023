#include <stdio.h>
int main()
{

    int a, b; // a is the first number, while b is the second number.
    int flag = 1;
    while (flag == 1)
    {
        printf("Enter first number - ");
        scanf("%d", &a);

        printf("Enter second number - ");
        scanf("%d", &b);

        (a > b) ? printf("the first number (%d) is greater than the second number (%d) = %d>%d", a, b, a, b) : printf("the second number (%d) is greater than the first number (%d) = %d<%d", b, a, a, b);
        printf("\nPress 1 to compare again.\nPress 0 to exit\noption - ");
        scanf("%d", &flag);
    }
    return 0;
}