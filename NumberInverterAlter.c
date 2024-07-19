#include <stdio.h>
#include <math.h>

int main()
{
    int num, num2, answer = 0, digit = 1;
    printf("Enter the number : ");
    scanf("%d", &num);
    num2 = num;

    while (num - pow(10, digit) >= 0)
    {
        digit++;
    }

    for (int numero = 0, k = 0, j = digit - 1; j >= 0; j--)
    {
        while (num2 - numero * pow(10, j) >= 0)
        {
            numero++;
        }
        answer = answer + (numero - 1) * pow(10, k);
        num2 = num2 - (numero - 1) * pow(10, j);
        k++;
        numero = 0;
    }

    if (answer == num)
    {
        printf("it is a palindrome");
    }

    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}