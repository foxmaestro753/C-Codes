#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    printf("The numbers to be entered are : \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || e <= 0)
    {
        printf("The numbers entered were wrong\n");
    }

    else
    {

        if (a > b && a > c && a > d && a > e)
        {
            printf("The largest number is %d\n", a);
        }

        else if (b > a && b > c && b > d && b > e)
        {
            printf("The largest number is %d\n", b);
        }

        else if (c > a && c > b && c > d && c > e)
        {
            printf("The largest number is %d\n", c);
        }

        else if (d > a && d > b && d > c && d > e)
        {
            printf("The largest number is %d\n", d);
        }

        else if (e > a && e > b && e > c && e > d)
        {
            printf("The largest number is %d\n", e);
        }

        if (a < b && a < c && a < d && a < e)
        {
            printf("The smallest number is %d\n", a);
        }

        else if (b < a && b < c && b < d && b < e)
        {
            printf("The smallest number is %d\n", b);
        }

        else if (c < a && c < b & c < d && c < e)
        {
            printf("The smallest number is %d\n", c);
        }

        else if (d < a && d < b && d < c && d < e)
        {
            printf("The smallest number is %d\n", d);
        }

        else if (e < a && e < b && e < c && e < d)
        {
            printf("The smallest number is %d\n", e);
        }
    }

    f = (a + b + c + d + e) / 5;
    printf("The average of The five values is : %d\n", f);
    return 0;
}