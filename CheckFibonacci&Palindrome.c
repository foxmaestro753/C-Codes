#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fibonaccinumberposition(int n)
{
    if (n != 0)
    {
        int i = 1;
        for (int j = 0, m, x = 0, y = 1; j <= n; j++)
        {
            m = x + y;
            if (m == n)
            {
                break;
            }
            x = m - x;
            y = m;
            i++;
        }
        return (i);
    }
    else
    {
        return (0);
    }
}

bool fibonaccitest(int n)
{
    bool trvalue = false;

    if (n == 0 || n == 2 || n == 3)
    {
        trvalue = true;
    }

    for (int j = 1, m, x = 1, y = 0; j <= n; j++)
    {
        m = x + y;
        if (n == m)
        {
            trvalue = true;
            break;
        }
        x = m - x;
        y = m;
    }

    return (trvalue);
}

bool palindrometest(int n)
{
    int a, remainder = 0, answer = 0;
    bool tvalue = false;
    a = n;

    while (a > 0)
    {
        remainder = a % 10;
        answer = answer * 10 + remainder;
        a = a / 10;
    }
    if (answer == n)
    {
        tvalue = true;
    }
    return (tvalue);
}

void printfibonaccipalindrome(int num1, int num2)
{
    int c, t = 0;
    if ((fibonaccinumberposition(num2) - fibonaccinumberposition(num1)) == 1 || (fibonaccinumberposition(num2) - fibonaccinumberposition(num1)) == -1)
    {
        printf("no numbers");
    }

    else
    {
        if (num1 < num2)
        {
            for (int j = 0, x = 0, y = 1; j <= fibonaccinumberposition(num2); j++)
            {
                c = x + y;
                if (c > num1 && c < num2 && palindrometest(c))
                {
                    printf("%d ", c);
                    t++;
                }
                x = c - x;
                y = c;
            }
        }
        if (num2 < num1)
        {
            for (int j = 0, x = 0, y = 1; j <= fibonaccinumberposition(num1); j++)
            {
                c = x + y;
                if (c > num2 && c < num1 && palindrometest(c))
                {
                    printf("%d ", c);
                    t++;
                }
                x = c - x;
                y = c;
            }
        }
        if (t == 0)
        {
            printf("no numbers");
        }
    }
}

int main()
{
    int num1, num2;

    while (scanf("%d %d", &num1, &num2) != -1)
    {
        if (fibonaccitest(num1) && fibonaccitest(num2))
        {
            printfibonacciPalindrome(num1, num2);
            printf("\n");
        }
        else
        {
            printf("No numbers");
            printf("\n");
        }
    }

    return 0;
}