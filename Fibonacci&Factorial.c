#include <stdio.h>

int fibonacci(int n)
{
    int m = 0;
    for (int x = 0, y = 1, i = 0; i <= n - 1; i++)
    {
        m = x + y;
        x = m - x;
        y = m;
    }
    return (m);
}

int factorial(int n)
{
    int factorial = 1;

    if (n == 0)
    {
        factorial = 1;
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
    }

    return (factorial);
}

int main()
{
    int input, num;
    printf("Enter 1 for fibonacci and 2 for factorial : ");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("Enter the fibonacci term u want : ");
        scanf("%d", &num);
        printf("The %dth term is : %d", num, fibonacci(num));
    }

    if (input == 2)
    {
        printf("Enter the fcatorial u want : ");
        scanf("%d", &num);
        printf("The factorial of %d is : %d", num, factorial(num));
    }

    if (input != 1 && input != 2)
    {
        printf("Invalid input :(");
    }

    return 0;
}