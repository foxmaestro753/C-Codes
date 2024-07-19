#include <stdio.h>

int main()
{
    int num, remainder, number, reversed = 0;
    printf("The term u want to print : ");
    scanf("%d", &num);
    num = number;
    while (number > 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    if (num == reversed)
    {
        printf("The given number is a palindrome");
    }

    if (num != reversed)
    {
        printf("The number is not a palindrome");
    }
    return 0;
}