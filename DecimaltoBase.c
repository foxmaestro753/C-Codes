#include <stdio.h>
#include <math.h>

int main()
{
    int num, base, i = 0, answer = 0, number, remainder = 0;
    printf("Enter the base 10 number : ");
    scanf("%d", &num);
    printf("Enter the base to which you want to convert : ");
    scanf("%d", &base);
    number = num;

    while (number > 0)
    {
        number = number / base;
        i++;
    }

    for (int j = 0; j <= i; j++)
    {
        remainder = num % base;
        answer = answer + remainder * pow(10, j);
        num = num / base;
    }

    printf("The base %d answer is : %d", base, answer);

    return 0;
}