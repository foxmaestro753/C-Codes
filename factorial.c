#include <stdio.h>

int main()
{
    int num, factorial = 1;
    printf("The number whose factorial you want: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("%d", 1);
    }

    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial = factorial * i;
        }
    }
    printf("%d\n", factorial);
    return 0;
}