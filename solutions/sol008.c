#include <stdio.h>
int main()
{
    int firstnum, secondnum, result;
    char op;
    float divresult;

    printf("Enter your expression: ");
    scanf("%d%c%d", &firstnum, &op, &secondnum);

    switch (op)
    {
    case '+':
        result = firstnum + secondnum;
        printf("%d + %d = %d", firstnum, secondnum, result);
        break;

    case '-':
        result = firstnum - secondnum;
        printf("%d -%d = %d", firstnum, secondnum, result);
        break;

    case '*':
        result = firstnum * secondnum;
        printf("%d * %d = %d", firstnum, secondnum, result);
        break;

    case '/':
        divresult = (float)firstnum / secondnum;
        printf("%d / %d = %.2f", firstnum, secondnum, divresult);
        break;
    }

    return 0;
}